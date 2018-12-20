#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "alumno.hpp"


using namespace std;

class Agenda{

	private:
		vector<Alumno> _listaAlumnos;

	public:

		//Observadores

		inline Alumno getAlumno(int i) const { return _listaAlumnos.at(i);}
		inline vector<Alumno> getListaAlumnos() const {return _listaAlumnos;}
		inline int getPos(Alumno alumno);
		inline bool isVacia(){if(_listaAlumnos.size()==0){return true;}else{return false;}}
		
		//Modificadores
		inline void setListaAlumnos(vector<Alumno> listaAlumnos){_listaAlumnos=listaAlumnos;}

		//FUNCIONES
		int  buscarAlumno(string DNI);
		int  buscarAlumno(string apellidos, int equipo);
		bool validacionDatos(Alumno alumno);
		bool modificarAlumno();
		bool eliminarAlumno(int pos);
		bool insertarAlumno(Alumno alumno);
		void mostrarAlumno(Alumno alumno);
		bool guardarBackup(string nombre);
		bool cargarBackup(string nombre);
};

#endif
