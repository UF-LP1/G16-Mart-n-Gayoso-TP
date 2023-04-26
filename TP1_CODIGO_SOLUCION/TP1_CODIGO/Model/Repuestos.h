/**
 * Project Untitled
 */


#ifndef _REPUESTOS_H
#define _REPUESTOS_H
#include <string>
#include <iostream>
using namespace std;

class Repuestos {
public: 
    

 Repuestos(string _Categoria,  float Tam);
 ~Repuestos();
    
//string foto();//ver como hacer esta funcion
    
float get_tam();

protected: 
    const string Categoria;
    const float Tamanyo_art_acambiar;
    

};

#endif //_REPUESTOS_H