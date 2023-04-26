/**
 * Project Untitled
 */


#include "Repuestos.h"

Repuestos::Repuestos(string _Categoria, float Tam): Categoria(_Categoria),Tamanyo_art_acambiar(Tam)
{
}

//HACER ESTO
/**
string Repuestos::foto() {
    return ;
}
*/

float Repuestos::get_tam() {
    return this->Tamanyo_art_acambiar;
}

Repuestos::~Repuestos()
{

}

