/**
 * Project Untitled
 */


#include "Articulos_Electricidad.h"

Articulos_Electricidad::Articulos_Electricidad(string _Nombre_art, float _Tamanyo, string _Categoria_articulo, enchufes en, lampara lamp) :Articulos(_Nombre_art, _Tamanyo, _Categoria_articulo)
{
	this->Tipo_enfuches = en;
	this->Tipo_lampara = lamp;
	
}





Articulos_Electricidad::~Articulos_Electricidad() {}


