#include"Model/Articulos.h"
#include"Model/Cliente.h"
#include "Model/Stock.h"


int main()
{


	unsigned int PresupuestoTotal;
	Cliente* Cliente1 = new Cliente("Sol", "PPPP33", "66739973");
	Articulos* Articulo1 = new Articulos("Clavo", 0.5, "Ferreteria");
	Articulos* Articulo2 = new Articulos("Tornillo", 1.5, "Ferreteria");
	Articulos* Articulo3 = new Articulos("Taruos", 0.6, "Ferreteria");


	Articulo1->set_cant_art(30);
	Articulo1->set_precio(20);

	Articulo2->set_cant_art(50);
	Articulo2->set_precio(70);

	Articulo3->set_cant_art(10);
	Articulo3->set_precio(65);

	Cliente1->agregarArt(*Articulo1);
	Cliente1->agregarArt(*Articulo2);
	Cliente1->agregarArt(*Articulo3);

	stock* stock1 = new stock();
	stock1->set_nomb_art("Clavo");
	stock1->set_cant_art(50);

	PresupuestoTotal = Cliente1->generarPresupuestos(*Cliente1);

	cout << PresupuestoTotal;



	return 0;
}

