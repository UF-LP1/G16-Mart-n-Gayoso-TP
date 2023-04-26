/**
 * Project Untitled
 */


#ifndef _ARTICULOS_ELECTRICIDAD_H
#define _ARTICULOS_ELECTRICIDAD_H
#include <string>
#include <iostream>
using namespace std;
#include"enchufes.h";
#include"lampara.h";
#include "Articulos.h"


class Articulos_Electricidad: public Articulos {
public: 
    
Articulos_Electricidad(string _Nombre_art, float _Tamanyo, string _Categoria_articulo);
    ~Articulos_Electricidad();

protected: 
    lampara Tipo_lampara;
    enchufes Tipo_enfuches;
    

};

#endif //_ARTICULOS_ELECTRICIDAD_H