/**
 * Project Untitled
 */


#ifndef _EMPLEADOS_H
#define _EMPLEADOS_H
#include <string>
#include <iostream>
using namespace std;

class Empleados {
public: 
    
Empleados(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos);
~Empleados();
    
virtual string get_name();    
virtual string get_surname();   
virtual string get_dni();
    
virtual void realizar_trabajo();
    
virtual unsigned int get_sueldos();

virtual unsigned int get_PrecServ();
virtual void set_PrecServ(unsigned int _PrecServ);

bool operator==(const Empleados& otros) const;

protected: 
        const string Tipo_empleado;
        const string Nombre;
        const string Apellido;
        const string Dni;
    bool A_domicilio;
        const unsigned int Sueldos;
    unsigned int PrecioServicio;
    

};

#endif //_EMPLEADOS_H