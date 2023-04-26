/**
 * Project Untitled



#ifndef _ARTICULOS_COCINAYBAÑO_BAZAR_H
#define _ARTICULOS_COCINAYBAÑO_BAZAR_H
#include <string>
#include <iostream>
using namespace std;
#include "Color_art.h"
#include "Articulos.h"


class Articulos_CocinayBaño_Bazar: public Articulos {
public: 
    
 Articulos_CocinayBaño_Bazar(string _Nombre_art, float _Tamanyo, string _Categoria_articulo);
 ~Articulos_CocinayBaño_Bazar();


protected: 
    Color_art Articulo_color;//enum
    

};

#endif //_ARTICULOS_COCINAYBAÑO_BAZAR_H
 */