/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <string>
#include <time.h>
#include <iostream>
using namespace std;

class Ferreteria {
public: 
    
 Ferreteria(string _Nombre);
 ~Ferreteria();
    

void set_direccion( string Dirreccion);
    

//bool ingreso_horario(ctime horario); //no se como arreglar esto del tiempo corte como poner con el ctime 
    
string get_nombre();

protected: 
        const string Nombre;
    string Direccion;
    

};

#endif //_FERRETERIA_H