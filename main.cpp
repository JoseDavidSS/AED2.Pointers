#include <iostream>
#include "Puntero.h"

using namespace std;

int main() {

    Puntero* puntero = new Puntero;

    void (Puntero::* funcionEjemploPuntero)(int) = &Puntero::funcionEjemplo;
    (puntero->*funcionEjemploPuntero)(21);

    puntero->punteroAVariable();

    void (Puntero::* punteroAFuncionPuntero)() = &Puntero::punteroAFuncion;
    (puntero->*punteroAFuncionPuntero)();

    puntero->punteroAPuntero();

    puntero->punteroAArray();

    puntero->aritmeticaPunteros();

}