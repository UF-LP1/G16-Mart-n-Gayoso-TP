/**
 * Project Untitled
 */
#pragma once
#ifndef _STOCK_H
#define _STOCK_H
#include "Cliente.h"
#include"Articulos.h"
#include <string>
#include <algorithm>
#include <list>

class Cliente; // lo buscamos y para hacer el friend nos decia que teniamos que hacer esta "Forward declaration" si no nos funcionaba

using namespace std;

class stock {
public:

    stock();
    ~stock();


 // bool buscar_art(Cliente clienteA);//no la usamos mas

  friend unsigned int Cliente::generarPresupuestos(stock stock1);     

    void set_nomb_art(string Nombre_art_ped);
    void set_cant_art(unsigned int Cant_art_s);

    bool Cant_necesaria();//no la usamos

    list<Articulos>list_stock;

    void agregar_stock( const list<Articulos>& art);

    stock& operator=(const list<Articulos>& art);
   
    
protected:
    string Nombre_art_pedido;
    unsigned int Cant_art_stock;
   

};

#endif //_STOCK_H