
#include "agenda.hpp"
#include "macros.hpp"

using namespace std;


int Agenda::buscarAlumno(string DNI){
	for(int i=0; i<getListaAlumnos().size();i++){
		if(getListaAlumnos().at(i).getDNI()==DNI){
			return i;
		}
	}

	return -1;
}
int Agenda::buscarAlumno(string apellidos, int equipo){

int aux=0;
int cont=0;
	for(int i=0; i<getListaAlumnos().size();i++){
		cout << _listaAlumnos.at(i).getApellidos() << endl;
		cout << _listaAlumnos.at(i).getEquipo() << endl << endl;
		cout << apellidos << endl;
		cout << equipo << endl;
		if((_listaAlumnos.at(i).getApellidos()==apellidos)and(_listaAlumnos.at(i).getEquipo()==equipo)){
			cout << "entra"<<endl;
			cont++;
			aux=i;
		}
	}
	if(cont>1){
		return -2;
	}
	else if(cont==0){

		return -1;
	}
	else{
		return aux;
	}

}
bool Agenda::validacionDatos(Alumno alumno){
	int aux=0;
	int cont=0;
	for(int i=0; i<getListaAlumnos().size();i++){
		if((getListaAlumnos().at(i).getDNI()==alumno.getDNI())or(getListaAlumnos().at(i).getEmail()==alumno.getEmail())){
			
			return false;
		}
		if(alumno.getLider()and getListaAlumnos().at(i).getEquipo()==alumno.getEquipo()){
			if(getListaAlumnos().at(i).getLider()){
				return false;
			}
		}
				
	}
	return true;

}
bool Agenda::insertarAlumno(Alumno alumno){
	if(validacionDatos(alumno)){
	
		_listaAlumnos.push_back(alumno);
		
		return true;
	}
	else{return false;}
}
void Agenda::mostrarAlumno(Alumno alumno){
	cout << BIBLUE << "DNI: " << RESET << alumno.getDNI()<<endl;
	cout << BIBLUE <<"Nombre: " << RESET << alumno.getNombre()<<" "<<alumno.getApellidos()<<endl;
	cout << BIBLUE <<"Fecha Nacimiento: " << RESET << alumno.getFechaNacimiento()<<endl;
	cout << BIBLUE <<"Email: " << RESET << alumno.getEmail()<<endl;
	cout << BIBLUE <<"Dirección: " << RESET << alumno.getDireccion()<<endl;
	cout << BIBLUE <<"Curso: " << RESET << alumno.getCurso()<<endl;
	cout << BIBLUE <<"Equipo: " << RESET << alumno.getEquipo()<<endl;
	if(alumno.isLider()){cout << BIBLUE << "Lider: " << RESET << "Si" << endl;}
	else{cout << BIBLUE << "Lider: " << RESET << "No" << endl;}
	cout<<endl;
	cout<<endl;

}
bool Agenda::eliminarAlumno(int pos){
	
	if(pos>=0 and (pos<getListaAlumnos().size())){	
		
		_listaAlumnos.erase(_listaAlumnos.begin()+pos);
		
		return true;
	}
	else{
		return false;
	}
}



bool Agenda::guardarBackup(string nombre){

	std::ofstream fich(nombre.c_str());
	
	if(fich.is_open()){
		
		for(int i=0; i < this->getListaAlumnos().size(); i++){
  	
  			  fich << getListaAlumnos().at(i).getDNI();
  			  fich << ";";
  			  fich << getListaAlumnos().at(i).getNombre();
  			  fich << ";";
  			  fich << getListaAlumnos().at(i).getApellidos();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getFechaNacimiento();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getEmail();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getDireccion();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getTelefono();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getCurso();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getEquipo();
			  fich << ";";
			  fich << getListaAlumnos().at(i).getLider();
			  fich << "\n";
  		}
  	}

	fich.close();
	return true;
}
bool Agenda::cargarBackup(string nombre){

	Alumno alumno;
	char dato[256];
	string dato1;
	
	
	std::ifstream fich(nombre.c_str());
	
		if(fich.is_open()){
		while(fich.getline(dato,256,';'))
			{
				
				
			
			
			dato1=dato;
			alumno.setDNI(dato1);
				
			fich.getline(dato, 256,';');
			dato1=dato;
			alumno.setNombre(dato1);
			
			fich.getline(dato, 256,';');
			dato1=dato;
			alumno.setApellidos(dato1);
			
			fich.getline(dato, 256,';');
			dato1=dato;
			alumno.setFechaNacimiento(dato1);
			
			fich.getline(dato, 256,';');
			dato1=dato;
			alumno.setEmail(dato1);
			
			fich.getline(dato, 256,';');
			dato1=dato;
			alumno.setDireccion(dato1);
			
			fich.getline(dato, 256,';');
			alumno.setTelefono(atoi(dato));
			
			fich.getline(dato, 256,';');
			alumno.setCurso(atoi(dato));
			fich.getline(dato, 256,';');
			alumno.setEquipo(atoi(dato));
			
			fich.getline(dato, 256,'\n');
			
			if(strcmp(dato,"1")){
				alumno.setLider(true);
			}
			else{
				alumno.setLider(false);
			}
			
			insertarAlumno(alumno);
			}
			
			
		std::cout << BIGREEN <<"Fichero cargado con éxito :)"  << RESET <<std::endl;
		}
		else{
			std::cout << BIRED <<"No se ha podido abrir el fichero"  << RESET <<std::endl;
			return false;
		}
		
	fich.close();
	return true;


}
void Agenda::mostrarEquipo(int numero){
	
	for(int i=0; i<getListaAlumnos().size();i++){
		if(getListaAlumnos().at(i).getEquipo()==numero){
			mostrarAlumno(getListaAlumnos().at(i));
		}
	}
}
	
