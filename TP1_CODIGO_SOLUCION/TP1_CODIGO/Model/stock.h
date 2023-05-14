/**
 * Project Untitled
 */

#ifndef _STOCK_H
#define _STOCK_H
#include <string>
#include <iostream>
#include"Articulos.h"
#include "Cliente.h"
#include <algorithm>
using namespace std;

class stock {
public:

    stock();
    ~stock();


    bool buscar_art(Cliente &ClienteA);


    void set_nomb_art(string Nombre_art_ped);


    void set_cant_art(unsigned int Cant_art_s);

    bool Cant_necesaria();

    list<Articulos>list_stock;

    void agregar_stock(list<Articulos> art);


protected:
    string Nombre_art_pedido;
    unsigned int Cant_art_stock;
   

};

#endif //_STOCK_H