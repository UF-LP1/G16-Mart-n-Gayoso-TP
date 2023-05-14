

#include "Articulos.h"
using namespace std;

Articulos::Articulos(string _Nombre_art, float _Tamanyo, string _Categoria_articulo) : Nombre_art(_Nombre_art), Tamanyo(_Tamanyo), Categoria_articulo(_Categoria_articulo)
{
    this->Cant_art_pedido = 0;
    this->Precio = 0;
    this->Cambio = true; //lo inicializoen true y que al momento de revisar las condiciones de cambio en caso que el prducto ya no valga para eso cambia a false
}

 string Articulos::get_nombre_art() {
    return this->Nombre_art;
}

float Articulos::get_Tam() {
    return this->Tamanyo;
}



void Articulos::set_precio(unsigned int precio) {
    this->Precio = precio;
}

void Articulos::set_cant_art(unsigned int Cant)
{
    this->Cant_art_pedido = Cant;
}

float Articulos::get_precio() {
    return this->Precio;
}

unsigned int Articulos::get_Cant_art()
{
    return this->Cant_art_pedido;
}



/*bool Articulos::existe_art(string tipoart) {

    if (tipoart == this->Nombre_art)
        return true;
    else
        return false;
}*/








Articulos::~Articulos() {}