/**
 * Project Untitled
 */


#include "Despachante.h"

/**
 * Despachante implementation
 */


/**
 * @param unsigned int Cant_entreg usigned int Cant_prods
 */




Despachante::Despachante(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos): Empleados(_Tipo_empleado,_Nombre, _Apellido, _Dni, _Sueldos)
{
	this->Cantidad_productos_entregar=0;

}

void Despachante::realizar_trabajo() {

	cout << "Realizando trabajo de despachante" << endl;
	return;
}
Despachante::~Despachante() {

}



void Despachante::set_Cant_prod_entreg(unsigned int C_productos_e)
{
	this->Cantidad_productos_entregar = C_productos_e;
}

unsigned int Despachante::get_cant_prod()
{
	return this->Cantidad_productos_entregar;
}


