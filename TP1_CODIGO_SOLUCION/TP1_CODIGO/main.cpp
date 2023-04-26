#include"Model/Articulos.h"
#include"Model/Cliente.h"


int main()
{
	

	unsigned int PresupuestoTotal;
	Cliente* Cliente1= new Cliente("Sol","PPPP33","66739973");
	Articulos* Articulo1 = new Articulos("Clavo", 0.5, "Ferreteria");
	Articulos* Articulo2 = new Articulos("Tornillo", 1.5, "Ferreteria");
	Articulo1->set_cant_art(30);
	Articulo1->set_precio(20);

	Articulo2->set_cant_art(50);
	Articulo2->set_precio(70);

	Cliente1->agregarArt(*Articulo1);
	Cliente1->agregarArt(*Articulo2);

	PresupuestoTotal=Cliente1->generarPresupuestos();
	

	cout << PresupuestoTotal;
	


	return 0;
}