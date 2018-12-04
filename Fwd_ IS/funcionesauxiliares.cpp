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

	PLACE(posicion++,10);
	cout << "[3]Eliminar Alumno";
	
	
	
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

void mostrarAgenda(Agenda agenda){
	if(agenda.isVacia()==true) {
		cout<<"LISTA VACIA"<<endl;
		return;
	}
	for(int i=0; i<agenda.getListaAlumnos().size();i++){
		agenda.mostrarAlumno(agenda.getListaAlumnos().at(i));
	}
}
void insertarAlumno(Agenda agenda){
	Alumno alumno;
	string cadena;
	int numero;
	bool lider;
	cout<<"Introduce el DNI: "<<endl;
	cin>>cadena;
	alumno.setDNI(cadena);
	cout<<"Introduce el Nombre: "<<endl;
	cin>>cadena;
	alumno.setNombre(cadena);
	cout<<"Introduce los Apellidos: "<<endl;
	cin>>cadena;
	alumno.setApellidos(cadena);
	cout<<"Introduce la Fecha de Nacimiento: "<<endl;
	cin>>cadena;
	alumno.setFechaNacimiento(cadena);
	cout<<"Introduce el Email"<<endl;
	cin>>cadena;
	alumno.setEmail(cadena);
	cout<<"Introduce la Direccion: "<<endl;
	cin>>cadena;
	alumno.setDireccion(cadena);
	cout<<"Introduce el telefono: "<<endl;
	cin>>numero;
	alumno.setTelefono(numero);
	cout<<"Introduce el curso: "<<endl;
	cin>>numero;
	alumno.setCurso(numero);
	cout<<"Introduce el Equipo: "<<endl;
	cin>>numero;
	alumno.setEquipo(numero);
	cout<<"Introduce 'Si' en caso de que sea lider o 'No' en caso contrario"<<endl;
	cin>>cadena;
	if(cadena=="Si"){lider=true;}else{lider=false;}
	alumno.setLider(lider);
	if(agenda.validacionDatos(alumno)){
		agenda.insertarAlumno(alumno);}
	else{
		cout<<"ERROR: Datos Errones."<<endl;
		cout<<"Introduce de nuevo los Datos."<<endl;
		insertarAlumno(agenda);
	}
}
void eliminarAlumno(Agenda agenda){
	if(agenda.isVacia()){
		cout<<"LA AGENDA SE ENCUENTRA VACIA"<<endl;
		return ;
	}	
	int numero;	
	string cadena;
	cout<<"Introduce una opcion: "<<endl;
	cout<<"[1]Eliminar por DNI"<<endl;
	cout<<"[2]Eliminar por Apellidos y Equipo"<<endl;
	cin>>numero;
	if(numero==1){
		cout<<"Introduzca el DNI: "<<endl;
		cin>>cadena;
		if((numero=agenda.buscarAlumno(cadena))!=-1){
			if(agenda.eliminarAlumno(numero)){cout<<"ELIMINADO CON EXITO"<<endl;return ;}
			else{cout<<"ERROR AL ELIMINAR USUARIO"<<endl;}
		}
		else{
			cout<<"ALUMNO NO ENCONTRADO"<<endl;
		}
		}
		else if(numero==2){
			cout<<"Introduca los apellidos: "<<endl;
			cin>>cadena;
			cout<<"Intorduzca el equipo: "<<endl;
			cin>>numero;
			if((numero=agenda.buscarAlumno(cadena,numero))==-2){
				cout<<"Debe buscar por DNI: "<<endl;
				cin>>cadena;
				if((numero=agenda.buscarAlumno(cadena))!=-1){
					if(agenda.eliminarAlumno(numero)){cout<<"ELIMINADO CON EXITO"<<endl;return; }
					else{cout<<"ERROR AL ELIMINAR USUARIO"<<endl;}
				}
				else{
					cout<<"ALUMNO NO ENCONTRADO"<<endl;
				}
			}
			else if(numero==-1){
				cout<<"ALUMNO NO ENCONTRADO"<<endl;
			}
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
