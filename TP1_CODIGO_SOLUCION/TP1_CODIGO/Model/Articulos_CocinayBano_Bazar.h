#ifndef _ARTICULOS_COCINAYBANO_BAZAR_H
#define _ARTICULOS_COCINAYBANO_BAZAR_H
#include <string>
#include <iostream>
using namespace std;
#include "Color_art.h"
#include "Articulos.h"


class Articulos_CocinayBano_Bazar: public Articulos {
public: 
    
 Articulos_CocinayBano_Bazar(string _Nombre_art, float _Tamanyo, string _Categoria_articulo, Color_art color);
 ~Articulos_CocinayBano_Bazar();


protected: 
    Color_art Articulo_color;//enum
    

};

#endif //_ARTICULOS_COCINAYBAÑO_BAZAR_H
 