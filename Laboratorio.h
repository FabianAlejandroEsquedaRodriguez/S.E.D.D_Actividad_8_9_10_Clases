#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include "Computadora.h"

using namespace std;

class Laboratorio{

    //Metodos
public:
    //Constructor
    Laboratorio();

    //Comportamientos
    void agregarFinal(const Computadora &comp);//Va a recibir una computadora como referencia constante
    void mostrar();

private:
    Computadora array[5];//Arreglo de nuestra clase computadora
    size_t cont;

};

#endif //LABORATORIO_H