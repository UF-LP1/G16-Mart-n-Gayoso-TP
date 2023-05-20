/**
 * Project Untitled
 */
#pragma once
#ifndef _CLIENTE_H
#define _CLIENTE_H

#include <string>
#include"Articulos.h"
#include <iostream>
#include <list>
#include <sstream>
#include "Empleados.h"

class stock;//lo buscamos y para hacer el friend nos decia que teniamos que hacer esta "Forward declaration" si no nos funcionaba


class Cliente {
public:

    Cliente(string nombre_cli, string direc_cli, string tel_cli);
    ~Cliente();

    string get_name();
    string get_direc();
    string get_tel();
    bool get_foto();

    void set_foto(bool foto);
    

    unsigned int generarPresupuestos(stock stock1);



    void agregarArt(Articulos Art_pedido);

    list <Articulos> lista_Art_Pedidos;

    const  static int get_cantclientes();
    string to_string();
    void imprimir();

    
    


protected:
    const string Nombre_cliente;
    const string Direc_cliente;
    const string Telefono_cliente;
    static int contclientes;
    bool fotorep;
    
   


};

#endif //_CLIENTE_H
