/**
 * Project Untitled
 */


#ifndef _DUENYO_FERRETERIA_H
#define _DUENYO_FERRETERIA_H
#include <string>
#include <exception>
#include <iostream>
using namespace std;
#include"Articulos.h";
#include"Empleados.h"
#include"Herramientas.h"
#include "C:\Users\micau\Documents\Valen\1er Cuatri 2023\LP1\TP CAMBIOS2\TP1_CODIGO_SOLUCION\TP1_CODIGO\Excero.h"
#include <exception>
#include"C:\Users\micau\Documents\Valen\1er Cuatri 2023\LP1\TP CAMBIOS2\TP1_CODIGO_SOLUCION\TP1_CODIGO\ExpDesp.h"


class Duenyo_ferreteria {
public: 
    
Duenyo_ferreteria();
~Duenyo_ferreteria();
    
void agregarEmp(Empleados Emp_Agregar);

void contratar(Empleados empleado);
    

void despedir(Empleados empleado); 
    

void set_cobrar(unsigned int _A_cobrar);

void set_pagar(unsigned int platac, unsigned int _A_pagar);
void set_pagar_seguro(unsigned int seguro);
    



protected: 
    unsigned int A_cobrar;
    unsigned int A_pagar;
    list<Empleados> list_empleados;

};



#endif //_DUENYO_FERRETERIA_H