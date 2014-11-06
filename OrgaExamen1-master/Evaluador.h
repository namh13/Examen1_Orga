#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Monstruo.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Monstruo*monstruo, int posicion);
Monstruo* leer(string nombre_archivo, int posicion);
string getMonstruoConMasCabezas(string nombre_archivo);

#endif // EVALUADOR_H
