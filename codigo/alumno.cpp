#include "alumno.hpp"

// Sobrecarga del operador de salida
ostream &operator<<(ostream &stream, Alumno const & objeto)
{
  // Se escriben los datos teniendo en cuenta el formato: CP Nombre; hombres; mujeres;
  stream << objeto.getDNI();
  stream << ";";
  stream << objeto.getNombre();
  stream << ";";
  stream << objeto.getApellidos();
  stream << ";";
  stream << objeto.getFechaNacimiento();
  stream << ";";
  stream << objeto.getEmail();
  stream << ";";
  stream << objeto.getDireccion();
  stream << ";";
  stream << objeto.getTelefono();
  stream << ";";
  stream << objeto.getCurso();
  stream << ";";
  stream << objeto.getEquipo();
  stream << ";";
  stream << objeto.getLider();
  stream << "\n";

  return stream;
}

// Sobrecarga del operador de entrada
istream &operator>>(istream &stream, Alumno & objeto)
{
 // Se leen los datos teniendo en cuenta el formato: CP Nombre; hombres; mujeres;
  std::string cadena;
  
  std::getline(stream,cadena,';');
  objeto.setDNI(cadena);

  std::getline(stream,cadena,';');
  objeto.setNombre(cadena);

  std::getline(stream,cadena,';');
  objeto.setApellidos(cadena);

  std::getline(stream,cadena,';');
  objeto.setFechaNacimiento(cadena);
  
  std::getline(stream,cadena,';');
  objeto.setEmail(cadena);
  
  
  std::getline(stream,cadena,';');
  objeto.setDireccion(cadena);
  
  std::getline(stream,cadena,';');
  objeto.setTelefono(atoi(cadena.c_str()));

  std::getline(stream,cadena,';');
  objeto.setCurso(atoi(cadena.c_str()));
  
  std::getline(stream,cadena,';');
  objeto.setEquipo(atoi(cadena.c_str()));
  
  std::getline(stream,cadena,'\n');
  if(cadena=="1"){
  	objeto.setLider(true);
  }
  else{
  	objeto.setLider(false);
  }
  

  return stream;
} 
