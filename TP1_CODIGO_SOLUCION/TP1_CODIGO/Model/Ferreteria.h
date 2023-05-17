/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <string>
#include <time.h>
#include <iostream>
#include "Cliente.h"
#include "Articulos.h"
#include "stock.h"

using namespace std;

class Ferreteria {
public: 
    
 Ferreteria(string _Nombre);
 ~Ferreteria();
    

void set_direccion( string Dirreccion);
    
bool ingreso_horario(time_t tiempo,string Dias); 
    
string get_nombre();





protected: 
        const string Nombre;
    string Direccion;
    
    

};

#endif //_FERRETERIA_H