/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H
#include <string>
#include <iostream>
using namespace std;

#include "Empleados.h"


class Plomero: public Empleados {
public: 
 Plomero(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos);
     ~Plomero();
protected: 
    bool Reparacion_instalacion;
    bool Mantenimiento;
    

};

#endif //_PLOMERO_H