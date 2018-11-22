#ifndef PROFESOR_HPP
#define PROFESOR_HPP

#include "persona.hpp"

using namespace std;

class Profesor : public Persona{

	private:
		string _asignatura;
		bool _rol;
		Agenda _agendaAlumnos;

	public:

		//Observadores

		string getAsignatura(){return _asignatura;}
		bool getRol(){return _rol;}

		//Modificadores

		void setAsignatura(string asignatura){_asignatura = asignatura;}
		void hacerCoordinador(){_rol = true;}
		void hacerAyudante(){_rol = false;}

		//Funciones
		bool logIn(string email, string password);
		bool cargarFichero(string nombreFichero);
		bool guardarFichero(string nombreFichero);
		bool cargarBackup();
		bool guardarBackup();

};

#endif