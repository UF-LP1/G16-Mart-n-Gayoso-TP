/**
 * Project Untitled
 */


#include "Servicio_cerrajeria.h"

Servicio_cerrajeria::Servicio_cerrajeria(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos, string tipo_serv, string tipo_llave):Empleados(_Tipo_empleado, _Nombre, _Apellido, _Dni, _Sueldos),precio(_precio),tipo_servicio(tipo_serv),tipo_de_llave(tipo_llave)
{
}

string  Servicio_cerrajeria::get_tipo_llave() {
    return this->tipo_de_llave;
}


void Empleados::realizar_trabajo() {

	cout << "Realizando trabajo de cerrajero";
	return;
}

string  Servicio_cerrajeria::get_tipo_serv() {
    return this->tipo_servicio;
}

 Servicio_cerrajeria::~Servicio_cerrajeria() {

}