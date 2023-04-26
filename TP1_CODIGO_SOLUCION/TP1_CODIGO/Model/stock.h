/**
 * Project Untitled
 */


#ifndef _STOCK_H
#define _STOCK_H
#include <string>
#include <iostream>
#include"Articulos.h"
using namespace std;

class stock {
public: 
    
stock();
~stock();
    

bool busacr_art(Articulos);
    

void set_nomb_art( string Nombre_art_ped);
    

void set_cant_art( unsigned int Cant_art_s);
    
bool Cant_necesaria();
protected: 
    string Nombre_art_pedido;
    unsigned int Cant_art_stock;
    

};

#endif //_STOCK_H