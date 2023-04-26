/**
 * Project Untitled
 */


#include "stock.h"

stock::stock()
{
}

//REVISAR
bool stock::busacr_art(Articulos) {
    return false;
}


void stock::set_nomb_art( string Nombre_art_ped) {
    this->Nombre_art_pedido=Nombre_art_ped;
}

void stock::set_cant_art( unsigned int Cant_art_s) {
   this->Cant_art_stock=Cant_art_s;
}


bool stock::Cant_necesaria() {
    return false;
}

 stock::~stock() {

}