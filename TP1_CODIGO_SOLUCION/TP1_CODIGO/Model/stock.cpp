/**
 * Project Untitled
 */



#include "stock.h"
using namespace std;

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

bool stock::buscar_art(Cliente clienteA)
{
    list<Articulos>::iterator it = clienteA.lista_Art_Pedidos.begin();
    list<Articulos>::iterator it2 = list_stock.begin(); //no se crea la lista de stock
    int N = clienteA.lista_Art_Pedidos.size();
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
