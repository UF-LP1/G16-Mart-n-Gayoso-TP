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
    

 Servicio_cerrajeria(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos, string tipo_serv,  string tipo_llave);
 ~Servicio_cerrajeria();
    
    
string  get_tipo_llave();
    
string get_tipo_serv();
void realizar_trabajo() override;

protected: 
     const string tipo_servicio;//venta de llaves o de cerradura
     const string tipo_de_llave;//magnetica o normal, en caso de que sea cerradura va "vacio"
    

};

#endif //_SERVICIO_CERRAJERIA_H