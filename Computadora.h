#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{

    //Metodos
    public:
        //Constructor parametrizado
        Computadora(const string &SO, const string &RAM, const string &Nombre_equipo, float precio);
        Computadora();//Constructor sin parametros

        //SETTERS Y GETTERS
        void setSistemaOperativo(const string &so);
        string getSistemaOperativo();

        void setMemoriaRAM(const string &ram);
        string getMemoriaRAM();

        void setNombreEquipo(const string &name);
        string getNombreEquipo();

        void setPrecio(float p);
        float getPrecio();

    //Atributos
    private:
        string SO;//Sistema Operativo
        string RAM;//Memoria RAM
        string Nombre_equipo;//Nombre del equipo;
        float precio;
};

#endif //COMPUTADORA_H