#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <fstream>
#include "macros.hpp"

using namespace std;

class Persona
{
	private:
		string _DNI, _nombre, _apellidos, _fecha_nacimiento, _email, _direccion;
		int _telefono;

	public:

		//Observadores

		inline string getDNI() const {return _DNI;}
		inline string getNombre()const{return _nombre;}
		inline string getApellidos()const{return _apellidos;}
		inline string getFechaNacimiento()const{return _fecha_nacimiento;}
		inline string getEmail()const{return _email;}
		inline string getDireccion()const{return _direccion;}
		inline int getTelefono()const{return _telefono;}

		//Modificadores

		inline void setDNI(string DNI){_DNI = DNI;}
		inline void setNombre(string nombre){_nombre = nombre;}
		inline void setApellidos(string apellidos){_apellidos = apellidos;}
		inline void setFechaNacimiento(string fecha_nacimiento){_fecha_nacimiento = fecha_nacimiento;}
		inline void setEmail(string email){_email = email;}
		inline void setDireccion(string direccion){_direccion = direccion;}
		inline void setTelefono(int telefono){_telefono = telefono;}


};

#endif
