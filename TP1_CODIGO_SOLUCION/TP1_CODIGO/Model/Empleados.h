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
    
string get_name();
    
string get_surname();
    
string get_dni();
    
void realizar_trabajo();
    
unsigned int get_sueldos();

protected: 
        const string Tipo_empleado;
        const string Nombre;
        const string Apellido;
        const string Dni;
    bool A_domicilio;
        const unsigned int Sueldos;
    

};

#endif //_EMPLEADOS_H