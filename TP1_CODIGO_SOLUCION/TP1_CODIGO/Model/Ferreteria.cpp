

#include "Ferreteria.h"

Ferreteria::Ferreteria(string _Nombre):Nombre(_Nombre)
{
    this->Direccion = "xxxxxx";//no se muy bien como inicializar esto porque igual hay un set
}



void Ferreteria::set_direccion( string Dirreccion) {
    this->Direccion = Dirreccion;
    
}

//HAY QUE VER ESTO DEL TIME
//bool Ferreteria::ingreso_horario( time) {
   // return false;
//}

string Ferreteria::get_nombre() {
    return this->Nombre;
}

Ferreteria::~Ferreteria() {

}