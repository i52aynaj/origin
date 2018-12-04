#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Persona
{
	private:
		string _DNI, _nombre, _apellidos, _fecha_nacimiento, _email, _direccion;
		int _telefono;

	public:

		//Observadores

		inline string getDNI(){return _DNI;}
		inline string getNombre(){return _nombre;}
		inline string getApellidos(){return _apellidos;}
		inline string getFechaNacimiento(){return _fecha_nacimiento;}
		inline string getEmail(){return _email;}
		inline string getDireccion(){return _direccion;}
		inline int getTelefono(){return _telefono;}

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
