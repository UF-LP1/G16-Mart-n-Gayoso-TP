/**
 * Project Untitled
 */


#include "Cliente.h"
#include "stock.h"
using namespace std;



Cliente::Cliente(string nombre_cli, string direc_cli, string tel_cli) :Nombre_cliente(nombre_cli), Direc_cliente(direc_cli), Telefono_cliente(tel_cli)
{
}


string Cliente::get_name() {
    return this->Nombre_cliente;
}


string Cliente::get_direc() {
    return this->Direc_cliente;
}

string Cliente::get_tel() {
    return this->Telefono_cliente;
}



void Cliente::agregarArt(Articulos Art_pedido)
{
    lista_Art_Pedidos.push_back(Art_pedido);

}


Cliente::~Cliente() {

}

 unsigned int Cliente::generarPresupuestos(stock stock1)
{
    int i;
    int N = lista_Art_Pedidos.size();
    unsigned int Presupuesto = 0;
    list<Articulos>::iterator it;

    for (it = lista_Art_Pedidos.begin(); it != lista_Art_Pedidos.end(); it++)
    {
        list<Articulos>::iterator it2;
        for (it2 = stock1.list_stock.begin(); it2 != stock1.list_stock.end(); it2++) // la funcion buscar nos estaba dando problemas entoces pensamos en directamente hacerla aca
        {
            if (it->get_nombre_art() == it2->get_nombre_art())
            {
                if (it->get_Cant_art() <= it2->get_Cant_art())
                {
                    Presupuesto += it->get_precio() * it->get_Cant_art();
                    break;
                }
            }

        }
        if (it2 == stock1.list_stock.end())
        {
            cout << "El Articulo " << it->get_nombre_art() << "No esta en el stock actualmente" << endl;
        }
    }

    return Presupuesto;
   
}
