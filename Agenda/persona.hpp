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

		string getDNI(){return _DNI;}
		string getNombre(){return _nombre;}
		string getApellidos(){return _apellidos;}
		string getNacimiento(){return _fecha_nacimiento;}
		string getEmail(){return _email;}
		string getDireccion(){return _direccion;}
		int getTelefono(){return _telefono;}

		//Modificadores

		void setDNI(string DNI){_DNI = DNI;}
		void setNombre(string nombre){_nombre = nombre;}
		void setApellidos(string apellidos){_apellidos = apellidos;}
		void setNacimiento(string fecha_nacimiento){_fecha_nacimiento = fecha_nacimiento;}
		void setEmail(string email){_email = email;}
		void setDireccion(string direccion){_direccion = direccion;}
		void setTelefono(int telefono){_telefono = telefono;}


};

#endif
