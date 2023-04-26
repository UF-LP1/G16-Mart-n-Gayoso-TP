/**
 * Project Untitled
 */


#ifndef _SERVICIO_CERRAJERIA_H
#define _SERVICIO_CERRAJERIA_H
#include <string>
#include <iostream>
using namespace std;

#include "Empleados.h"


class Servicio_cerrajeria: public Empleados {
public: 
    

 Servicio_cerrajeria(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos, unsigned int _precio, string tipo_serv,  string tipo_llave);
 ~Servicio_cerrajeria();
    

 unsigned int get_prec();
    
string  get_tipo_llave();
    
string get_tipo_serv();

protected: 
    const unsigned int precio;
     const string tipo_servicio;
     const string tipo_de_llave;
    

};

#endif //_SERVICIO_CERRAJERIA_H