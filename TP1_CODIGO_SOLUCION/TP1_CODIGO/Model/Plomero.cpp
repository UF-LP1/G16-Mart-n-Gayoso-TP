/**
 * Project Untitled
 */


#include "Plomero.h"

/**
 * Plomero implementation
 */


Plomero::Plomero(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos) :Empleados(_Tipo_empleado, _Nombre, _Apellido, _Dni, _Sueldos) {

	this->Reparacion_instalacion = false;
	this->Mantenimiento = false;
}

void Empleados::realizar_trabajo() {
   
	cout << "Realizando trabajo de plomero";
	return;
}


 Plomero::~Plomero() {

}

 void Plomero::set_rep_inst(bool rep_inst)
 {
	 this->Reparacion_instalacion = rep_inst;
 }

 void Plomero::set_Mantenimiento(bool mant)
 {
	 this->Mantenimiento = mant;
 }
