#include"Model/Articulos.h"
#include"Model/Cliente.h"
#include "Model/Stock.h"
#include "Model/Ferreteria.h"
#include <list>
#include"Model/Articulos_CocinayBano_Bazar.h"
#include"Model/Articulos_Electricidad.h"
#include"Model/Articulos_Ferreteria.h"
#include "Model/Empleados.h"
#include"Model/Despachante.h"
#include "Model/Plomero.h"
#include "Model/Servicio_cerrajeria.h"
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

	
	Empleados* Empleado1 = new Plomero("Plomero", "Pedro", "Perez", "35241975", 100000);
	Plomero* Plomero1 = dynamic_cast<Plomero*>(Empleado1);

	if (Plomero1 != nullptr) {    //Usamos dynamic_cast para poder acceder a los metodos de la clase hija(plomero)
		Plomero1->set_rep_inst(true);
		Plomero1->set_Mantenimiento(false); 
	}

	Empleados* Empleado2 = new Despachante("Despachante", "Daniela", "Diaz", "43950018", 70000, 10, 50);
	Despachante* Despachante1 = dynamic_cast<Despachante*>(Despachante1);

	if (Despachante1 != nullptr) {
		cout << "Cant entregas: " << Despachante1->get_Cant_entreg() << endl << "Cant productos: " << Despachante1->get_cant_prod() << endl;
	}

	Empleados* Empleado3 = new Servicio_cerrajeria("Servicio de cerrajeria", "Sebastian", "Castro", "16000001", 90000, "llave", "magnetica");
	Servicio_cerrajeria* Cerrajero1 = dynamic_cast<Servicio_cerrajeria*>(Cerrajero1);

	if (Cerrajero1 != nullptr)
	{
		cout << "Tipo servicio: " << Cerrajero1->get_tipo_serv() << endl << "Tipo llave: " << Cerrajero1->get_tipo_llave() << endl;
	}




	//PresupuestoTotal = Cliente1->generarPres5upuestos(*Cliente1,*stockp);
	cout << Articulo1->get_nombre_art() << " " << Articulo1->get_Tam() << " " << Articulo1->get_Cant_art() << " " << Articulo1->get_precio() << endl;
	cout << Cliente1->get_name() << " " << Cliente1->get_direc() << " " << Cliente1->get_tel()<<endl;
	cout << Empleado1->get_name() << Empleado1->get_surname() << Empleado1->get_dni() << Empleado1->get_sueldos() << endl;
	Empleado1->realizar_trabajo();
	Empleado2->realizar_trabajo();
	Empleado3->realizar_trabajo();

	//cout << PresupuestoTotal;


	delete Cliente1;
	delete Articulo1;
	delete stockp;

	return 0;
}

