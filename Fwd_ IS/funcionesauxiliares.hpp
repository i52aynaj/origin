#ifndef _FUNCIONESAUXILIARES_HPP
#define _FUNCIONESAUXILIARES_HPP


#include <iostream>
#include <fstream>
#include <string>
#include "agenda.hpp"
#include "alumno.hpp"
#include "persona.hpp"
#include "macros.hpp"


int menu();

void mostrarAgenda(Agenda &agenda);

void insertaAlumno(Agenda &agenda);

void eliminarAlumno(Agenda &agenda);

void cargar(Agenda &agenda);

void guardar(Agenda &agenda);

void mostrarAlumno(Agenda &agenda);












#endif
