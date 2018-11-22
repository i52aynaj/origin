#ifndef ALUMNO_HPP
#define ALUMNO_HPP

#include "persona.hpp"

using namespace std;

class Alumno : public Persona{
	private:
		int _curso;
		int _equipo;
		bool _lider;

	public:

		//Observadores

		int getCurso(){return _curso;}
		int getEquipo(){return _curso;}
		bool isLider(){return _lider;}

		//Modificadores

		void setCurso(int curso){_curso = curso;}
		void setEquipo(int equipo){_equipo = equipo;}
		void darLider(){_lider = true;}
		void quitarLider(){_lider = false;}

};

#endif

