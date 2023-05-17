/**
 * Project Untitled
 */

#ifndef _ARTICULOS_H
#define _ARTICULOS_H
#include <list>
#include <string>
#include <iostream>

using namespace std;

class Articulos {
public:

    Articulos(string _Nombre_art, float _Tamanyo, string _Categoria_articulo); 
    ~Articulos();

     string get_nombre_art();
     virtual float get_Tam();
     virtual float get_precio();
     virtual unsigned int get_Cant_art();
     

   virtual void set_cant_art(unsigned int Cant);
   virtual void set_precio(unsigned int precio);
   virtual void set_cambio(bool cambio);
   
   Articulos& operator=(const Articulos& otro);

  

protected:
         const string Nombre_art;
    unsigned int Cant_art_pedido;
    unsigned int Precio;
         const float Tamanyo;
         const string Categoria_articulo;
    bool Cambio;
 


};

#endif //_ARTICULOS_H
