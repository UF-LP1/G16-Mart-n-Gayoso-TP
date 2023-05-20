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
    

 Servicio_cerrajeria(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos);
 ~Servicio_cerrajeria();
    
    
string  get_tipo_llave();  
string get_tipo_serv();
bool get_permiso();

void set_tipoLlave(string tipoL);
void set_tipoServ(string tipoS);

void realizar_trabajo() override;
void set_permiso(bool permiso);
bool Permiso_llave();

protected: 
         string tipo_servicio;//venta de llaves o de cerradura
        string tipo_de_llave;//magnetica o normal, en caso de que sea cerradura va "vacio"
     bool tengo_permiso;
    

};

#endif //_SERVICIO_CERRAJERIA_H