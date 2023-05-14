/**
 * Project Untitled
 */

#ifndef _ARTICULOS_H
#define _ARTICULOS_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Articulos {
public:

    Articulos(string _Nombre_art, float _Tamanyo, string _Categoria_articulo); 
    ~Articulos();

     string get_nombre_art();

   virtual void set_cant_art(unsigned int Cant);


   virtual void set_precio(unsigned int precio);


    //bool existe_art(string tipoart); este metodo lo sacamos porque la funcion de esta ya la cumple busacrart en stock 

   virtual float get_Tam() ;

   virtual float get_precio() ;

   virtual unsigned int get_Cant_art() ;



protected:
    const string Nombre_art;
    unsigned int Cant_art_pedido;
    unsigned int Precio;
    const float Tamanyo;
    const string Categoria_articulo;
    bool Cambio;


};

#endif //_ARTICULOS_H
