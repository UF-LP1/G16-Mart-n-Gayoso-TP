/**
 * Project Untitled
 */


#include "Herramientas.h"


Herramientas::Herramientas(string _Nombre_art, float _Tamanyo, string _Categoria_articulo):Articulos(_Nombre_art, _Tamanyo, _Categoria_articulo) //yo creo que va algo asi por ser herencia pero no entiendo como
{
    this->Alquiler = false;
    this->Estado_art_a_alquilado = false;
    this->precio_seguro = 0;
    this->precio_alquiler = 0;
    this->tiempo_a_alquilar = 0;
    
   
}

void Herramientas::set_Precio_D( unsigned int p_D) {
    this->precio_alquiler = p_D;
}

void Herramientas::set_Precio_s( unsigned int p_s) {
    this->precio_seguro = p_s;
}


void Herramientas::set_tiempo(unsigned int t_a) {
    this->tiempo_a_alquilar = t_a;
}

unsigned int Herramientas::get_Precio_S()
{
    return this->precio_seguro;
}

unsigned int Herramientas::get_total_alquilar() {
    return (this->tiempo_a_alquilar*this->precio_alquiler)+this->precio_seguro; //no estoy segura que esto se pueda
}

bool Herramientas::get_Alquiler()
{
    return this->Alquiler;
}

void Herramientas::set_Alquiler(bool Alquiler)
{
    this->Alquiler = Alquiler;
}

bool Herramientas::get_Estado_art_a_alquilado()
{
    return this->Estado_art_a_alquilado;
}

void Herramientas::set_Estado_art_a_alquilado(bool estado_art_Alquilado)
{
    this->Estado_art_a_alquilado = estado_art_Alquilado;
}



Herramientas::~Herramientas() {

}