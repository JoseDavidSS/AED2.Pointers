#ifndef TAREAEXTRACLASE_2_PUNTERO_H
#define TAREAEXTRACLASE_2_PUNTERO_H

#include <iostream>
using namespace std;

class Puntero {

public:

//Atributos con los que contará la clase.
    int numero1 = 12345;
    int numero2 = 54321;
    int array[8] = {100,30,25,94,76,81,3,67};

//Métodos con los que contará la clase.
    void funcionEjemplo(int edad);
    void punteroAVariable();
    void punteroAFuncion();
    void punteroAPuntero();
    void punteroAArray();
    void aritmeticaPunteros();

};



#endif //TAREAEXTRACLASE_2_PUNTERO_H
