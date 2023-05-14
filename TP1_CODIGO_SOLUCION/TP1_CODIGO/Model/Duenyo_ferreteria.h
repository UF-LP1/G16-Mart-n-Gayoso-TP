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
    

void contratar(const Empleados& empleado);
    

void despedir(const Empleados& empleado);
    

void set_cobrar(unsigned int _A_cobrar);
    

    

void set_pagar_Articulos(unsigned int platac, unsigned int _A_pagar);
void set_pagar_seguro(unsigned int seguro);
    

//void Vender(Articulos);



friend list<Empleados> operator+(list<Empleados>list_empleados, const Empleados& empleado);
friend list<Empleados> operator-(list<Empleados>list_empleados, const Empleados& empleado);



protected: 
    unsigned int A_cobrar;
    unsigned int A_pagar;
    list<Empleados> list_empleados;

};


list<Empleados> operator+(list<Empleados> list_empleados, const Empleados& empleado)
{
    list_empleados.push_back(empleado);
    return list_empleados;
}
inline list<Empleados> operator-(list<Empleados> list_empleados, const Empleados& empleado)
{
    list_empleados.remove(empleado);
    return list_empleados;
}

#endif //_DUENYO_FERRETERIA_H