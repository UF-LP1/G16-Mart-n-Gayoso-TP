/**
 * Project Untitled
 */


#ifndef _DUENYO_FERRETERIA_H
#define _DUENYO_FERRETERIA_H
#include <string>
#include <iostream>
using namespace std;
#include"Articulos.h";
#include"Empleados.h"
#include"Herramientas.h"

class Duenyo_ferreteria {
public: 
    
Duenyo_ferreteria();
~Duenyo_ferreteria();
    

void contratar(Empleados);
    

void despedir(Empleados);
    

void set_cobrar(unsigned int _A_cobrar);
    
void cobrar();
    

void set_pagar( unsigned int _A_pagar);
    
unsigned int pagar();

void Vender(Articulos);




protected: 
    unsigned int A_cobrar;
    unsigned int A_pagar;
    

};

#endif //_DUENYO_FERRETERIA_H