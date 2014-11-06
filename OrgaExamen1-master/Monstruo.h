#ifndef MONSTRUO_H
#define MONSTRUO_H

#include <iostream>
#include <list>
#include <fstream>
using namespace std;

class Monstruo
{
public:
    int cabezas;
    int brazos;
    int piernas;
    string nombre;
    string apodo;
    bool es_carnivoro;
    Monstruo(int cabezas,int brazos,int piernas,string nombre,string apodo,bool es_carnivoro);
};

#endif // MASCOTA_H
