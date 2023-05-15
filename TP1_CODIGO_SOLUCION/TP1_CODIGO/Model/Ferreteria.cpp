

#include "Ferreteria.h"

Ferreteria::Ferreteria(string _Nombre):Nombre(_Nombre)
{
    this->Direccion = "";
}



void Ferreteria::set_direccion( string Dirreccion) {
    this->Direccion = Dirreccion;
    
}




//bool Ferreteria::ingreso_horario(time_t tiempo)
//{
//    
//
//    
//    tm* horaActual = localtime(&tiempo); 
//
//    
//    tm horaApertura = { 0, 0, 9 }; //abrimos de 9 a 20
//    tm horaCierre = { 0, 0, 20 };
//
//    
//    if (horaActual->tm_hour >= horaApertura.tm_hour && horaActual->tm_hour < horaCierre.tm_hour) {
//        return true;//esta abierto
//    }
//    else {
//        return false;//cerrado
//    }
//}

string Ferreteria::get_nombre() {
    return this->Nombre;
}

Ferreteria::~Ferreteria() {

}