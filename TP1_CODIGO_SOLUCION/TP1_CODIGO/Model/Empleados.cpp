/**
 * Project Untitled
 */


#include "Empleados.h"

/**
 * Empleados implementation
 */




Empleados::Empleados(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos): Tipo_empleado(_Tipo_empleado),Nombre(_Nombre),Apellido(_Apellido),Dni(_Dni),Sueldos(_Sueldos)
{
    this->A_domicilio = false;
} 


string Empleados::get_name() { 
    return this->Nombre;
}


string Empleados::get_surname() {
    return this->Apellido;
}


string Empleados::get_dni() {
    return this->Dni;
}

unsigned int Empleados::get_sueldos() {
    return this->Sueldos;
}

void Empleados::realizar_trabajo() {
    return;
}




Empleados::~Empleados() {

}