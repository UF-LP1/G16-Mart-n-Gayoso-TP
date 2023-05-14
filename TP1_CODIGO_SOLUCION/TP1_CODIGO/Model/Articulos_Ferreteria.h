/**
 * Project Untitled
 */


#ifndef _ARTICULOS_FERRETERIA_H
#define _ARTICULOS_FERRETERIA_H
#include <string>
#include <iostream>
using namespace std;
#include"Especificaciones.h";

#include "Articulos.h"


class Articulos_Ferreteria: public Articulos {
public: 

 Articulos_Ferreteria(string _Nombre_art, float _Tamanyo, string _Categoria_articulo, string _Material, Especificaciones tip_ferre); 
 ~Articulos_Ferreteria();

protected: 
         const string Material;
    Especificaciones Tipos_ferreteria;
    
};

#endif //_ARTICULOS_FERRETERIA_H