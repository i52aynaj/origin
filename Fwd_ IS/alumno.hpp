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

		inline int getCurso() const {return _curso;}
		inline int getEquipo() const {return _curso;}
		inline bool getLider() const {return _lider;};
		inline bool isLider() const {return _lider;}

		//Modificadores

		inline void setCurso(int curso){_curso = curso;}
		inline void setEquipo(int equipo){_equipo = equipo;}
		inline void setLider(bool lider){_lider=lider;}
		inline void darLider(){_lider = true;}
		inline void quitarLider(){_lider = false;}

};

#endif

