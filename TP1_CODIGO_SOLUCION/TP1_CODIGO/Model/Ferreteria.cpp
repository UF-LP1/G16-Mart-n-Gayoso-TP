

#include "Ferreteria.h"

Ferreteria::Ferreteria(string _Nombre):Nombre(_Nombre)
{
    this->Direccion = "";
}



void Ferreteria::set_direccion( string Dirreccion) {
    this->Direccion = Dirreccion;
    
}




bool Ferreteria::ingreso_horario(time_t tiempo,string Dias)
{
    
   
    
    tm horaActual = { 0 };
      localtime_s(&horaActual,&tiempo); 
    
    
    tm horaAperturaM = { 0, 30, 7 }; 
    tm horaCierreM = { 0, 0, 13 };
    tm horaAperturaT = { 0, 0, 17 };
    tm horaCierreT = {0,0,20};
    tm horaAperturaS = {0,0,8};

    if (Dias=="Lunes"|| Dias == "Martes" || Dias == "Miercoles" || Dias == "Jueves" || Dias == "Viernes")
    {
        if (horaActual.tm_hour >= horaAperturaM.tm_hour && horaActual.tm_hour < horaCierreM.tm_hour || horaActual.tm_hour >= horaAperturaT.tm_hour && horaActual.tm_hour < horaCierreT.tm_hour)
        {
            return true;
        }
    }
    
    if (Dias == "Sabado")
    {
        if ((horaActual.tm_hour >= horaAperturaS.tm_hour && horaActual.tm_hour < horaCierreM.tm_hour))
        {
            return true;
        }
    }

    else
    {
        return false;
    }
}

string Ferreteria::get_nombre() {
    return this->Nombre;
}

Ferreteria::~Ferreteria() {

}