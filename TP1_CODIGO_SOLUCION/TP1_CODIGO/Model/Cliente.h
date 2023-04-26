/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H
#include <string>
#include"Articulos.h"
#include <iostream>
#include <list>
using namespace std;

class Cliente {
public: 
    
Cliente( string nombre_cli,  string direc_cli,  string tel_cli);
~Cliente();
    
string get_name();
    
string get_direc();
    
string get_tel();

unsigned int generarPresupuestos();

void agregarArt(Articulos);
  
protected: 
    const string Nombre_cliente;
    const string Direc_cliente;
    const string Telefono_cliente;
    list <Articulos> lista_Art_Pedidos;


};


#endif //_CLIENTE_H