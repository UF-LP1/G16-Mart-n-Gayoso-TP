/**
 * Project Untitled
 */


#include "Servicio_cerrajeria.h"

Servicio_cerrajeria::Servicio_cerrajeria(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos, string tipo_serv, string tipo_llave):Empleados(_Tipo_empleado, _Nombre, _Apellido, _Dni, _Sueldos),tipo_servicio(tipo_serv),tipo_de_llave(tipo_llave)
{
}

string  Servicio_cerrajeria::get_tipo_llave() {
    return this->tipo_de_llave;
}


void Servicio_cerrajeria:: realizar_trabajo() {

	cout << "Realizando trabajo de cerrajero" << endl;
	return;
}

void Servicio_cerrajeria::set_permiso(bool permiso)
{
	this->tengo_permiso = permiso;
}

bool Servicio_cerrajeria::get_permiso()
{
	return this->tengo_permiso;
}

bool Servicio_cerrajeria::Permiso_llave()
{
	if (this->get_tipo_llave() == "magnetica")
	{
		if (this->get_permiso() == true)
		{
			cout << "Tengo permiso para hacer la llave" << endl;
			return true;
		}
	}
	return false;
}

string  Servicio_cerrajeria::get_tipo_serv() {
    return this->tipo_servicio;
}

 Servicio_cerrajeria::~Servicio_cerrajeria() {

}