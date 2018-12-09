
#include <iostream>
#include <string>
#include "funcionesauxiliares.hpp"
#include "macros.hpp"

int main(){

	Agenda agenda;

	int opcion;

	do{
		// Se elige la opción del menún
		opcion = menu();		

		std::cout << CLEAR_SCREEN;
		PLACE(3,1);

		// Se ejecuta la opción del menú elegida
		switch(opcion)
		{
			case 0: 
					std::cout << INVERSE;
					std::cout << "Fin del programa" << std::endl;
					std::cout << RESET;
			break;

		   ///////////////////////////////////////////////////////////////////

			case 1: 
					std::cout << "[1]Listar Agenda" << std::endl;
					mostrarAgenda(agenda);
					
					 
					break;

			//////////////////////////////////////////////////////////////////////////////
			case 2: 
					std::cout << "[2]Insertar Alumno" << std::endl;
					insertarAlumno(agenda);
					
				break;

			case 3: 
					std::cout << "[3]Eliminar Alumno" << std::endl;
					eliminarAlumno(agenda);
					break;
			
			//////////////////////////////////////////////////////////////////////////////
			
					

			//////////////////////////////////////////////////////////////////////////////
			default:
				std::cout << BIRED;
				std::cout << "Opción incorrecta ";
				std::cout << RESET;
				std::cout << "--> ";
			  	std::cout << ONIRED;
				std::cout << opcion << std::endl;
				std::cout << RESET;
     }
  
    if (opcion !=0)
    {
		PLACE(80,1);
		std::cout << "Pulse ";
		std::cout << BIGREEN;
		std::cout << "ENTER";
		std::cout << RESET;
		std::cout << " para mostrar el ";
		std::cout << INVERSE;
		std::cout << "menú"; 
		std::cout << RESET;

		// Pausa
		std::cin.ignore();

		std::cout << CLEAR_SCREEN;
    }
	  }while(opcion!=0);

	return 0;
}

