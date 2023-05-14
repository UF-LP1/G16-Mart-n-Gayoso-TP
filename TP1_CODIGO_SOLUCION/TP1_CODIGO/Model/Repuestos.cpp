/**
 * Project Untitled
 */


#include "Repuestos.h"

Repuestos::Repuestos(string _NombreArt, float Tam): NombreArt(_NombreArt),Tamanyo_art_acambiar(Tam)
{
}


float Repuestos::get_tam() {
    return this->Tamanyo_art_acambiar;
}

Repuestos::~Repuestos()
{

}

