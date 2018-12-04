#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "alumno.hpp"

using namespace std;

class Agenda{

	private:
		vector<Alumno> _listaAlumnos;

	public:

		//Observadores

		inline Alumno getAlumno(int i){ return _listaAlumnos.at(i);}
		inline vector<Alumno> getListaAlumnos(){return _listaAlumnos;}
		inline int getPos(Alumno alumno);
		inline bool isVacia(){if(_listaAlumnos.size()==0){return true;}else{return false}}
		//Modificadores
		inline void setListaAlumnos(vector<Alumno> listaAlumnos){_listaAlumnos=listaAlumnos;}

		//FUNCIONES
		int buscarAlumno(string DNI);
		int buscarAlumno(string apellidos, int equipo);
		bool validacionDatos(Alumno alumno);
		bool insertarAlumno(Alumno alumno);
		bool modificarAlumno();
		bool eliminarAlumno(int pos);
		inline void insertarAlumno(Alumno alumno){_listaAlumnos.push_back(alumno);}
		void mostrarAlumno(Alumno alumno);
};
