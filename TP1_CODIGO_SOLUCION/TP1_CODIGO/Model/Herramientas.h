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
bool get_Alquiler();
void set_Alquiler(bool Alquiler);
bool get_Estado_art_a_alquilado();
void set_Estado_art_a_alquilado(bool estado_art_Alquilado);

protected: 
    bool Alquiler;// true se puede alquilar false no se puede
    unsigned int precio_seguro;
    unsigned int precio_alquiler;
    unsigned int tiempo_a_alquilar;//cantidad de dias TRY CATCH
    bool Estado_art_a_alquilado; // true esta alquilado flase no esta alquilado
    

};

#endif //_HERRAMIENTAS_H