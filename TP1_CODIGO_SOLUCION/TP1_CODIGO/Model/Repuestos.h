/**
 * Project Untitled
 */


#ifndef _REPUESTOS_H
#define _REPUESTOS_H
#include <string>
#include <iostream>
using namespace std;

class Repuestos{
public: 
    

 Repuestos(string _NombreArt,  float Tam);
 ~Repuestos();
    

    
float get_tam();

protected: 
    const string NombreArt;
    const float Tamanyo_art_acambiar;
    

};

#endif //_REPUESTOS_H