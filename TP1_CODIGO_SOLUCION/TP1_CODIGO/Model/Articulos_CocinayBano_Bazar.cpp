#include "Articulos_CocinayBano_Bazar.h"



Articulos_CocinayBano_Bazar::Articulos_CocinayBano_Bazar(string _Nombre_art, float _Tamanyo, string _Categoria_articulo, Color_art color):Articulos(_Nombre_art,_Tamanyo,_Categoria_articulo)
{
	this->Articulo_color = color;

}    

Articulos_CocinayBano_Bazar::~Articulos_CocinayBano_Bazar() {}

