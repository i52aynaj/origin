#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "alumno.hpp"

using namespace std;

class Agenda{

	private:
		vector<Alumno> _listaAlumnos;

	public:

		//Observadores

		Alumno getAlumno(int i){ return _listaAlumnos.at(i);}

		//Modificadores

		void insertarAlumno(Alumno alumno){_listaAlumnos.push_back(alumno);}
};