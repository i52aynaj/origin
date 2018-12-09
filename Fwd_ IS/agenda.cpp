
#include "agenda.hpp"

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
		if((getListaAlumnos().at(i).getApellidos()==apellidos)and(getListaAlumnos().at(i).getEquipo()==equipo)){
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
	}
	return true;

}
bool Agenda::insertarAlumno(Alumno alumno){
	if(validacionDatos(alumno)){
		getListaAlumnos().push_back(alumno);
		return true;
	}
	else{return false;}
}
void Agenda::mostrarAlumno(Alumno alumno){
	cout<<"DNI: "<<alumno.getDNI()<<endl;
	cout<<"Nombre: "<<alumno.getNombre()<<" "<<alumno.getApellidos()<<endl;
	cout<<"Fecha Nacimiento: "<<alumno.getFechaNacimiento()<<endl;
	cout<<"Email: "<<alumno.getEmail()<<endl;
	cout<<"Dirección: "<<alumno.getDireccion()<<endl;
	cout<<"Curso: "<<alumno.getCurso()<<endl;
	cout<<"Equipo: "<<alumno.getEquipo()<<endl;
	if(alumno.isLider()){cout<<"Lider: Si"<<endl;}
	else{cout<<"Lider: No"<<endl;}
	cout<<endl;
	cout<<endl;

}
bool Agenda::eliminarAlumno(int pos){
	if(pos>=0 and (pos<getListaAlumnos().size())){	
	getListaAlumnos().erase(getListaAlumnos().begin()+pos);
	return true;
	}
	else{
	return false;
	}
}


	
	
