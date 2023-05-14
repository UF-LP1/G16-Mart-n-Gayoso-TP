/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include <string>
#include <iostream>
using namespace std;

#include "Articulos.h"


class Herramientas: public Articulos {
public: 
    

 Herramientas(string _Nombre_art, float _Tamanyo, string _Categoria_articulo);
 ~Herramientas();
    

void set_Precio_D( unsigned int p_D);
    

void set_Precio_s(unsigned int p_s);
    

void set_tiempo( unsigned int t_a);

unsigned int get_Precio_S();
    
unsigned int get_total_alquilar();
protected: 
    bool Alquiler;// true se puede alquilar false no se puede
    unsigned int precio_seguro;
    unsigned int precio_alquiler;
    unsigned int tiempo_a_alquilar;//cantidad de dias TRY CATCH
    bool Estado_art_a_alquilado; // true esta alquilado flase no esta alquilado
    

};

#endif //_HERRAMIENTAS_H