#ifndef _PROFESOR_HPP
#define _PROFESOR_HPP

#include "agenda.hpp"


using namespace std;

class Profesor : public Persona{
	private:
		string _asignatura;
		bool _rol;
		Agenda _agenda;

	public:

		//Observadores
		inline string getAsignatura(){return _asignatura;}
		inline bool getRol(){return _rol;}
		inline Agenda getAgenda(){return _agenda;}
		

		//Modificadores

		//inline bool login();
		inline bool isCordinador(){
			if(getRol()==true){
				return true;
			}
			else{
				return false;
			}
		}
		
		

};

#endif
