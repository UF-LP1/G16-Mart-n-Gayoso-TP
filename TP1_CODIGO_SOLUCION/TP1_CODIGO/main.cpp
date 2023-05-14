#include"Model/Articulos.h"
#include"Model/Cliente.h"
#include "Model/Stock.h"
#include "Model/Ferreteria.h"
#include <list>
#include"Model/Articulos_CocinayBano_Bazar.h"
#include"Model/Articulos_Electricidad.h"
#include"Model/Articulos_Ferreteria.h"
using namespace std;

int main()
{
	//unsigned int PresupuestoTotal;
	stock* stockp = new stock();

	std::list<Articulos> Articulos_stock;
	
	Articulos A1("Clavo", 0.5, "Ferreteria");

	A1.set_cant_art(100);
	A1.set_precio(70);
	Articulos_stock.push_back(A1);


	//stockp->agregar_stock(Articulos_stock);

	Cliente* Cliente1 = new Cliente("Sol", "PPPP33", "66739973");
	Articulos* Articulo1 = new Articulos_Ferreteria("Clavo",0.5,"Ferreteria","Metal",TipoF1);
	Articulos*Articulo4= new Articulos_CocinayBano_Bazar("Cortina", 200.0, "cocinabano", Amarillo);
	Articulos* Articulo5 = new Articulos_Electricidad("Lampara", 34.9, "Electricidad", Nopedidoe, LED);
	Articulos* Articulo6 = new Articulos_Electricidad("Enchufe", 3.9, "Electricidad", Tipo1, Nopedidol);

	Articulo1->set_cant_art(30);
	Articulo1->set_precio(20);

	Articulo4->set_cant_art(1);
	Articulo4->set_precio(1000);

	Articulo5->set_cant_art(2);
	Articulo5->set_precio(2500);

	Articulo6->set_cant_art(3);
	Articulo6->set_precio(40);

	Cliente1->agregarArt(*Articulo1);
	Cliente1->agregarArt(*Articulo4);
	Cliente1->agregarArt(*Articulo5);
	Cliente1->agregarArt(*Articulo6);

	//PresupuestoTotal = Cliente1->generarPres5upuestos(*Cliente1,*stockp);
	cout << Articulo1->get_nombre_art() << " " << Articulo1->get_Tam() << " " << Articulo1->get_Cant_art() << " " << Articulo1->get_precio() << endl;
	//cout << PresupuestoTotal;


	delete Cliente1;
	delete Articulo1;
	delete stockp;

	return 0;
}

