/**
 * Project Untitled
 */



#include "stock.h"

stock::stock()
{
}

void stock::agregar_stock(list<Articulos> art)
{
    for (auto it3 = art.begin(); it3 != art.end(); it3++)
    {
        list_stock.push_back(*it3);

    }
}

bool stock::buscar_art(Cliente &ClienteA) {

    list<Articulos>::iterator it = ClienteA.lista_Art_Pedidos.begin();
    list<Articulos>::iterator it2 = list_stock.begin(); //no se crea la lista de stock
    int N = ClienteA.lista_Art_Pedidos.size();
    int N1 = list_stock.size();

  /*  for (int i = 0; i < N; i++)
    {
        if (find(list_stock.begin(), list_stock.end(), *it) == list_stock.end())
            return false;
        it++;
    }
    return true;*/

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N1; j++)
        {
            if (it == it2)
                return true;
            else
                return false;

            it2++;
        }
        it++;
    }
}
//Hicimos la funcion de ver si existe el articulo, esto es lo que entendimos pero cuando lo queres correr nos aparece una advertencia que dice:
// error: C2676 '==' binario: 'Articulos' no define este operador o una conversión a un tipo aceptable para el operador predefinido	
//Si no hacemos la funcion esta de buscar artiuclo, el codigo corre bien para sacar el presupuesto.


void stock::set_nomb_art(string Nombre_art_ped) {
    this->Nombre_art_pedido = Nombre_art_ped;
}

void stock::set_cant_art(unsigned int Cant_art_s) {
    this->Cant_art_stock = Cant_art_s;
}


bool stock::Cant_necesaria() {
    return false;
}



stock::~stock() {

}
