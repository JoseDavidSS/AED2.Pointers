#include "Puntero.h"

using namespace std;

void Puntero::funcionEjemplo(int edad) {
    printf("Tengo %d años\n", edad);
}
void Puntero::punteroAVariable() {

    //Un puntero a una variable, es una variable que almacena la dirección de una varibale.
    int* punteroNumero1 = &numero1;
    printf("El primer número es: %d \n", numero1);
    printf("Y el puntero de la variable numero1 es: ");
    std::cout << punteroNumero1 << std::endl;

}

void Puntero::punteroAFuncion() {

    //Un puntero a función es una variable que almacena la dirección de una función.
    printf("El puntero del método funcionEjemplo es: %d \n", &Puntero::funcionEjemplo);

}

void Puntero::punteroAPuntero() {

    //Un puntero a otro puntero es una variable que almacena la dirección de un puntero.

    int* punteroNumero2 = &numero2;
    printf("El puntero de la variable numero2 es: ");
    std::cout << punteroNumero2 << std::endl;

    int** punteroDePunteroNumero2 = &punteroNumero2; //Se usa doble * para indicar que es un puntero de otro puntero.
    printf("El puntero del puntero es: ");
    std::cout << punteroDePunteroNumero2 << std::endl;
}

void Puntero::punteroAArray() {

    //Un puntero a un array es una variable que almacena la dirección de un array.

    std::cout << "El array es:" << std::endl;
    for (int i = 0; i != 8; i++)
        std::cout << array[i] << std::endl;
    int* arrayPuntero = array;

    printf("El puntero es: ");
    std::cout << arrayPuntero << std::endl;

}

void Puntero::aritmeticaPunteros() {

    //La aritmética de punteros es utilizada para poder modificar o hacer lectura de punteros con valores específicos.

    for (int i = 0; i != 8; i++)
        std::cout << array[i] << std::endl;

    printf("El puntero al primer elemento del array es: ");
    int* arrayPuntero = &array[0];
    std::cout << arrayPuntero << std::endl;

    std::cout << "Se cambian valores del array con el puntero" << std::endl;
    *arrayPuntero = 88;
    *(arrayPuntero + 5) = 55555;
    *(arrayPuntero + 7) = 22222;

    for (int i = 0; i != 8; i++)
        std::cout << array[i] << std::endl;
}