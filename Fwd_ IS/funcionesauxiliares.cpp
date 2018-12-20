/*!
  \file   funcionesauxiliares.cpp
  \brief  Código de las funciones auxiliares para el programa principal de la práctica 4
  \author Enrique Galan Galan
  \date   30/5/2018
*/


#include <iostream>
#include <fstream>
#include <string>
#include "funcionesauxiliares.hpp"
#include "macros.hpp"

using namespace std;
int menu()
{
	int opcion;
	int posicion;

	// Se muestran las opciones del menú
	posicion=2;

	// Se borra la pantalla
	cout << CLEAR_SCREEN;

	PLACE(1,10);
	cout << BIBLUE;
	cout << "Programa principial | Opciones del menú";
	cout << RESET;

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	cout <<  "[1]Listar Agenda";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	cout << "[2]Insertar Alumno";
	
	posicion++;
	
	
	PLACE(posicion++,10);
	cout << "[3]Eliminar Alumno";
	
	posicion++;

	PLACE(posicion++,10);
	cout <<  "[4]CargarBackup";

	//////////////////////////////////////////////////////////////////////////////
	posicion++;

	PLACE(posicion++,10);
	cout << "[5]GuardarBackup";
	
	posicion++;
	
	
	PLACE(posicion++,10);
	cout << "[6]Mostrar Alumno";
	
	posicion++;

	PLACE(posicion++,10);
	cout << "[7]Mostrar Equipo";
	
	posicion++;
	
	
	PLACE(posicion++,10);
	cout << "[8]Modificar Alumno";
	
	
	
	//////////////////////////////////////////////////////////////////////////////
	posicion++;
 
	
	PLACE(posicion++,10);
	cout << BIGREEN;
	cout << "Opción: ";
	cout << RESET;

	// Se lee el número de opción
	cin >> opcion;

    // Se elimina el salto de línea del flujo de entrada
    cin.ignore();

	return opcion;
}

void mostrarAgenda(Agenda &agenda){
	if(agenda.isVacia()==true) {
		cout<<"LISTA VACIA"<<endl;
		return;
	}
	for(int i=0; i<agenda.getListaAlumnos().size();i++){
		agenda.mostrarAlumno(agenda.getListaAlumnos().at(i));
	}
	
	cout << BIYELLOW << "Total: " << RESET << agenda.getListaAlumnos().size() << endl;
}
void insertaAlumno(Agenda &agenda){
	Alumno alumno;
	string cadena;
	bool lider;
	
	cout<<"Introduce el DNI: "<<endl;
	getline(cin,cadena);
	alumno.setDNI(cadena);
	
	cout<<"Introduce el Nombre: "<<endl;
	getline(cin,cadena);
	alumno.setNombre(cadena);
	
	
	
	cout<<"Introduce los Apellidos: "<<endl;
	getline(cin,cadena);
	alumno.setApellidos(cadena);
	
	
	cout<<"Introduce la Fecha de Nacimiento: "<<endl;
	getline(cin,cadena);
	alumno.setFechaNacimiento(cadena);
	
	
	cout<<"Introduce el Email"<<endl;
	getline(cin,cadena);
	alumno.setEmail(cadena);
	
	
	cout<<"Introduce la Direccion: "<<endl;
	getline(cin, cadena);
	alumno.setDireccion(cadena);
	
	
	cout<<"Introduce el telefono: "<<endl;
	getline(cin,cadena);
	alumno.setTelefono(atoi(cadena.c_str()));
	
	
	cout<<"Introduce el curso: "<<endl;
	getline(cin,cadena);
	alumno.setCurso(atoi(cadena.c_str()));
	
	
	cout<<"Introduce el Equipo: "<<endl;
	getline(cin,cadena);
	alumno.setEquipo(atoi(cadena.c_str()));
	
	
	cout<<"Introduce 'Si' en caso de que sea lider o 'No' en caso contrario"<<endl;
	cin>>cadena;
	
	
	if(cadena=="Si"){lider=true;}else{lider=false;}
	alumno.setLider(lider);
	if(agenda.validacionDatos(alumno)){
		
		agenda.insertarAlumno(alumno);
		cout<<agenda.getListaAlumnos().size()<<endl;
	}
	else{
		cout<<"ERROR: Datos Errones."<<endl;
		cout<<"Introduce de nuevo los Datos."<<endl;
		insertaAlumno(agenda);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////
// ELIMINAR ALUMNO 
//////////////////////////////////////////////////////////////////////////////////////////////
void eliminarAlumno(Agenda &agenda){
	if(agenda.isVacia()){
		cout<<"LA AGENDA SE ENCUENTRA VACIA"<<endl;
		return ;
	}	
	
	string cadena1;	
	string cadena;
	int numero;
	
	cout<< BIBLUE <<  "Introduce una opcion: " << RESET << endl<<endl;
	cout<< BIYELLOW << "[1]Eliminar por DNI" << RESET <<endl;
	cout<< BIYELLOW << "[2]Eliminar por Apellidos y Equipo" << RESET <<endl;
	getline(cin, cadena);
	numero=atoi(cadena.c_str());
	
	//OPCION 1: ELIMINAR POR DNI
	if(numero==1){
		cout << BIYELLOW << "Introduzca el DNI: " << RESET << endl;
		getline(cin, cadena);
		if((numero=agenda.buscarAlumno(cadena))!=-1){
			if(agenda.eliminarAlumno(numero)==true){
				cout<< BIGREEN << "ELIMINADO CON EXITO"<< RESET << endl;
			}
			else{
				cout << BIRED << "ERROR AL ELIMINAR USUARIO" << RESET << endl;
			}
		}
		else{
			cout << BIRED << "ALUMNO NO ENCONTRADO" << RESET << endl;
		}
	}
	
	//OPCION 2: ELIMINAR POR APELLIDOS Y EQUIPO
	else if(numero==2){
		cout<<"Introduzca los apellidos: "<<endl;
		getline(cin, cadena);
		
		cout<<"Introduzca el equipo: "<<endl;
		getline(cin, cadena1);
		numero = atoi(cadena1.c_str());
		
		if((numero=agenda.buscarAlumno(cadena,numero))==-2){
		//Mas de un alumno encontrado
			cout << BIBLUE << "Mas de un Alumno Encontrado" << RESET << endl;
			cout << BIYELLOW << "Debe buscar por DNI: "<< RESET << endl;
			cin>>cadena;
			
			if((numero=agenda.buscarAlumno(cadena))!=-1){
				if(agenda.eliminarAlumno(numero)){
					cout<< BIGREEN << "ELIMINADO CON EXITO"<< RESET << endl;
				}
				else{
					cout << BIRED << "ERROR AL ELIMINAR USUARIO" << RESET << endl;
				}
			}
			else{
				cout << BIRED << "ALUMNO NO ENCONTRADO" << RESET << endl;
			}
		}
		else if(numero==-1){
			cout<<"ALUMNO NO ENCONTRADO"<<endl;
		}
		
		//HA ENCONTRADO SOLO 1
		else{
			if(agenda.eliminarAlumno(numero)){
				cout<<"ELIMINADO CON EXITO"<<endl;
		}
		else{
			cout<<"ERROR AL ELIMINAR ALUMNO"<<endl;
		}
		}
	}
	else{
		cout<<"OPCION INVALIDA"<<endl;
	}
}

///////////////////////////////////////////////////////////////////////////////
void cargar(Agenda &agenda){
	string cadena;
	cout<<"Introduzca el nombre del fichero: "<<endl;
	cin>>cadena;
	
	agenda.cargarBackup(cadena);
}

///////////////////////////////////////////////////////////////////////////////
void guardar(Agenda &agenda){
	string cadena;
	cout<<"Introduzca el nombre del fichero: "<<endl;
	cin>>cadena;
	agenda.guardarBackup(cadena);
}


///////////////////////////////////////////////////////////////////////////////////
//------------------ MOSTRAR ALUMNO --------------------------------------//
/////////////////////////////////////////////////////////////////////////////////
void mostrarAlumno(Agenda &agenda){
	
	if(agenda.isVacia()){
		cout<<"LA AGENDA SE ENCUENTRA VACIA"<<endl;
		return ;
	}	
	
	string cadena1;	
	string cadena;
	int numero;
	
	cout<< BIBLUE <<  "Introduce una opcion: " << RESET << endl<<endl;
	cout<< BIYELLOW << "[1]Eliminar por DNI" << RESET <<endl;
	cout<< BIYELLOW << "[2]Eliminar por Apellidos y Equipo" << RESET <<endl;
	getline(cin, cadena);
	numero=atoi(cadena.c_str());
	
	//OPCION 1: MOSTRAR POR DNI
	if(numero==1){
		cout << BIYELLOW << "Introduzca el DNI: " << RESET << endl;
		getline(cin, cadena);
		if((numero=agenda.buscarAlumno(cadena))!=-1){
			agenda.mostrarAlumno(agenda.getListaAlumnos().at(numero));
		}
		else{
			cout << BIRED << "ALUMNO NO ENCONTRADO" << RESET << endl;
		}
	}
	
	//OPCION 2: MOSTRAR POR APELLIDOS Y EQUIPO
	else if(numero==2){
		cout<<"Introduzca los apellidos: "<<endl;
		getline(cin, cadena);
		
		cout<<"Introduzca el equipo: "<<endl;
		getline(cin, cadena1);
		numero = atoi(cadena1.c_str());
		
		if((numero=agenda.buscarAlumno(cadena,numero))==-2){
		//Mas de un alumno encontrado
			cout << BIBLUE << "Mas de un Alumno Encontrado" << RESET << endl;
			cout << BIYELLOW << "Debe buscar por DNI: "<< RESET << endl;
			cin>>cadena;
			
			if((numero=agenda.buscarAlumno(cadena))!=-1){
				agenda.mostrarAlumno(agenda.getListaAlumnos().at(numero));
			}
			else{
				cout << BIRED << "ALUMNO NO ENCONTRADO" << RESET << endl;
			}
		}
		else if(numero==-1){
			cout<<"ALUMNO NO ENCONTRADO"<<endl;
		}
		
		//HA ENCONTRADO SOLO 1
		else{
			agenda.mostrarAlumno(agenda.getListaAlumnos().at(numero));
		}
	}
		
	else{
		cout<<"OPCION INVALIDA"<<endl;
	}
}


