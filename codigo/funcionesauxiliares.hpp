#ifndef _FUNCIONESAUXILIARES_HPP
#define _FUNCIONESAUXILIARES_HPP


#include <iostream>
#include <fstream>
#include <string>
#include "agenda.hpp"
#include "alumno.hpp"
#include "persona.hpp"
#include "macros.hpp"
#include "profesor.hpp"


int menu();

void mostrarAgenda(Agenda &agenda);

void insertaAlumno(Agenda &agenda);

void eliminarAlumno(Agenda &agenda);

void cargar(Agenda &agenda);

void guardar(Agenda &agenda);

void mostrarEquipo(Agenda &agenda);

void modificar(Agenda &agenda);

void mostrarAlumno(Agenda &agenda);

void loGin(Profesor &p);










#endif
