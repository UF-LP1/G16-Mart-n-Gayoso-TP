/**
 * Project Untitled
 */


#include "Herramientas.h"


Herramientas::Herramientas(string _Nombre_art, float _Tamanyo, string _Categoria_articulo):Articulos(_Nombre_art, _Tamanyo, _Categoria_articulo) //yo creo que va algo asi por ser herencia pero no entiendo como
{
}

void Herramientas::set_Precio_h( unsigned int p_h) {
    this->precio_alquiler = p_h;
}

void Herramientas::set_Precio_s( unsigned int p_s) {
    this->precio_seguro = p_s;
}


void Herramientas::set_tiempo(unsigned int t_a) {
    this->tiempo_a_alquilar = t_a;
}

unsigned int Herramientas::get_tiempo_a_alquilar() {
    return this->tiempo_a_alquilar; //no estoy segura que esto se pueda
}



Herramientas::~Herramientas() {

}