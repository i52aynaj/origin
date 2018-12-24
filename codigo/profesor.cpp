#include "profesor.hpp"


bool Profesor::login(string usuario, string contrasena){

	char dato[256];
	string dato1;
	
	std::ifstream fich("usuarios.txt");
	
		if(fich.is_open()){
		while(fich.getline(dato,256,' '))
			{
			dato1=dato;
			if(dato1==usuario){
				fich.getline(dato, 256,'\n');
				dato1=dato;
				if(dato1==contrasena){return true;}
			}
			}
			}
			
			
		
		
		else{
			std::cout << BIRED <<"No se ha podido abrir el fichero"  << RESET <<std::endl;
			return false;
		}
		
	fich.close();
	return false;


}







