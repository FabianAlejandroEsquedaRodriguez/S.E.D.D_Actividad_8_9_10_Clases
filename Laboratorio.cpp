#include <iostream>
#include "Laboratorio.h"

using namespace std;

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &comp){
    if(cont < 5){//SI nuestro contador es menor que 5
        array[cont] = comp;//Guardar el parametro que le pasamos segun la posicion en la que vaya nuestro arreglo
        cont ++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    for (size_t i = 0; i < cont; i++) {
        
        Computadora &c = array[i];//Estamos guardando una referencia a lo que hay en las posiciones del arreglo
        
        cout<<"SISTEMA OPERATIVO: "<<c.getSistemaOperativo()<<endl;
        cout<<"MEMORIA RAM: "<< c.getMemoriaRAM()<<endl;
        cout<<"NOMBRE DEL EQUIPO: "<<c.getNombreEquipo()<<endl;
        cout<<"PRECIO: "<<c.getPrecio()<<endl;

        cout<<endl;
    }
    
}