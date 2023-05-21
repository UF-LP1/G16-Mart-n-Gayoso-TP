/**
 * Project Untitled
 */


#include "Empleados.h"

/**
 * Empleados implementation
 */




Empleados::Empleados(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos): Tipo_empleado(_Tipo_empleado),Nombre(_Nombre),Apellido(_Apellido),Dni(_Dni),Sueldos(_Sueldos)
{
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

unsigned int Empleados::get_PrecServ()
{
    return this->PrecioServicio;
}

void Empleados::set_PrecServ(unsigned int _PrecServ)
{
    this->PrecioServicio = _PrecServ;
}


bool Empleados::operator==(const Empleados& otros) const
{
    return(this->Dni == otros.Dni);
}


void Empleados::realizar_trabajo() {
    return;
}




Empleados::~Empleados() {

}