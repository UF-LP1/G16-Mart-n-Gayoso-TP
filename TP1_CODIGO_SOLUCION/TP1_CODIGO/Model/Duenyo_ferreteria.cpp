/**
 * Project Untitled
 */


#include "Duenyo_ferreteria.h"

/**
 * Duenyo_ferreteria implementation
 */


Duenyo_ferreteria::Duenyo_ferreteria() {

}


void Duenyo_ferreteria::contratar(Empleados) {
    return;
}

void Duenyo_ferreteria::despedir(Empleados) {
    return;
}


void Duenyo_ferreteria::set_cobrar( unsigned int _A_cobrar) {
    this->A_cobrar = _A_cobrar; 
}

//esta funcion como que recibe la plata
void Duenyo_ferreteria::cobrar() {
    return; 
}


void Duenyo_ferreteria::set_pagar(unsigned int _A_pagar) {
    this->A_pagar = _A_pagar;
}

//esta funcion srive para dar vuelto o pagar en caso de que cobre el seguro
unsigned int Duenyo_ferreteria::pagar() {
    return this->A_pagar ; 
}

void Duenyo_ferreteria::Vender(Articulos) {
    return;
}




Duenyo_ferreteria::~Duenyo_ferreteria() {

}