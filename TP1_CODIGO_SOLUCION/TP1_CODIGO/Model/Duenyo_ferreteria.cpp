/**
 * Project Untitled
 */


#include "Duenyo_ferreteria.h"
#include <list> 

/**
 * Duenyo_ferreteria implementation
 */


Duenyo_ferreteria::Duenyo_ferreteria() {
    this->A_cobrar = 0;
    this->A_pagar = 0;

}


void Duenyo_ferreteria::set_cobrar( unsigned int _A_cobrar) {
    this->A_cobrar = _A_cobrar; 
    cout << "El duenyo recibe del cliente:$  " << this->A_cobrar ;
}



//plata c es la plata que nos da el cliente y la otra es lo que tiene que pagar
void Duenyo_ferreteria::set_pagar_Articulos(unsigned int platac, unsigned int _A_pagar) {
    this->A_pagar = platac - _A_pagar;
    cout << "El Duenyo le da el vuelto al cliente, vuelto: $ " << this->A_pagar;
}

void Duenyo_ferreteria::set_pagar_seguro(unsigned int seguro)
{
    this->A_pagar = seguro;
}


void Duenyo_ferreteria::contratar(const Empleados& empleado) {
    list_empleados = list_empleados + empleado;
    return;
}

void Duenyo_ferreteria::despedir(const Empleados& empleado) {
    list_empleados = list_empleados - empleado;
    return;
}

//void Duenyo_ferreteria::Vender(Articulos) {
//    return;
//}




Duenyo_ferreteria::~Duenyo_ferreteria() {

}