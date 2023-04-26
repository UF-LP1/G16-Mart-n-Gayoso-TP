/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include <string>
#include <iostream>
using namespace std;

#include "Articulos.h"


class Herramientas: public Articulos {
public: 
    

 Herramientas(string _Nombre_art, float _Tamanyo, string _Categoria_articulo);
 ~Herramientas();
    

void set_Precio_h( unsigned int p_h);
    

void set_Precio_s(unsigned int p_s);
    

void set_tiempo( unsigned int t_a);
    
unsigned int get_tiempo_a_alquilar();
protected: 
    bool Alquiler;
    unsigned int precio_seguro;
    unsigned int precio_alquiler;
    unsigned int tiempo_a_alquilar;
    bool Estado_art_a_alquilado;
    

};

#endif //_HERRAMIENTAS_H