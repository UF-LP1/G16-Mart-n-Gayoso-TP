/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H
#include <string>
#include <iostream>
#include "Empleados.h"
using namespace std;




class Despachante: public Empleados {
public: 
    Despachante(string _Tipo_empleado, string _Nombre, string _Apellido, string _Dni, unsigned int _Sueldos, unsigned int Cant_entreg, unsigned int Cant_prods);
    ~Despachante();
    const unsigned int get_Cant_entreg();
    unsigned int get_cant_prod();
    void realizar_trabajo() override;
protected: 
    const unsigned int Cantidad_entregas;
    const unsigned int Cantidad_productos_entregar;
    

};

#endif //_DESPACHANTE_H