/**
 * Project Untitled
 */


#include "Articulos_Ferreteria.h"



Articulos_Ferreteria::Articulos_Ferreteria(string _Nombre_art, float _Tamanyo, string _Categoria_articulo, string _Material, Especificaciones tip_ferre):Articulos(_Nombre_art, _Tamanyo, _Categoria_articulo)
{
	this->Tipos_ferreteria = tip_ferre;
}




Articulos_Ferreteria::~Articulos_Ferreteria() {

}