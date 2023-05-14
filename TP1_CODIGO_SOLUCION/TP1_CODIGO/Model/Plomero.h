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
     void set_rep_inst(bool rep_inst);
     void set_Mantenimiento(bool mant);
     void realizar_trabajo() override;
        
protected: 
    bool Reparacion_instalacion; //true reparacion, false instalacion
    bool Mantenimiento; //true hay que hacer mantenimiento, false no hay que hacerlo.
    

};

#endif //_PLOMERO_H