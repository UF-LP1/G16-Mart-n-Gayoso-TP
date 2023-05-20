#include "FuncSwitch.h"
#include<iostream>

void funcionSwitch(int k, Cliente *cliente,Duenyo_ferreteria *duenio,bool Cambio)
{
Articulos* Articulo6=nullptr;
Articulos* Articulo7 = nullptr;  
Articulos* Articulo8 = nullptr;
Herramientas* Herramienta3 = nullptr;
Articulos* Articulo9 = nullptr; 
unsigned int PlataSeguro, PrecioViejo,Afavor,Debe = 0;
int i,num;
	cout << "1=clavos, tamanyo 0.5" << endl << "2=clavos, tamanyo 1" << endl << "3= Pulidora" << endl << "4=Cortinas color Amarillo" << endl;
for (i = 0; i < k; i++)
{
		cout << "Elija que articulo quiere: " << endl;
		cin >> num;
	do
	{
		switch (num)
		{
		case 1:
			Articulo6 = new Articulos_Ferreteria("Clavo", 0.5, "Ferreteria", "Metal", TipoF1);

			unsigned int Cant_Art;
			cout << " Ingrese la cantidad de articulos que quiere: ";
			cin >> Cant_Art;
			Articulo6->set_cant_art(Cant_Art);
			Articulo6->set_precio(20);//estos los decimos nosotras porque vendria a ser algo que decide el duenyo
			if (Cambio == true)
			{
				cout << "Ingrese el precio pagado por el producto que quiere cambiar: " << endl;
				cin >> PrecioViejo;
				if (PrecioViejo <= Articulo6->get_precio())
				{
					Debe = (Articulo6->get_precio() - PrecioViejo);
					cout << "Le Debe al duenio $ " << Debe<<endl;
					Articulo6->set_precio(Debe);//tomamos esto como el nuevo precio ya qu ees lo que va a pagar el cliente por lo tanto es lo que se deberia sumar al presupuesto
				}
				else
				{
					Afavor = (PrecioViejo - Articulo6->get_precio());
					cout << "Le devolvemos $ " << Afavor << endl;
					Articulo6->set_precio(0);
				}
			}
			cliente->agregarArt(*Articulo6);
			break;

		case 2:
			Articulo7 = new Articulos_Ferreteria("Clavo", 1, "Ferreteria", "Metal", TipoF1);
			unsigned int Cant_Art2, Precio;
			
			cout << " Ingrese la cantidad de articulos que quiere: " << endl;
			cin >> Cant_Art;

			Articulo7->set_cant_art(Cant_Art);
			Articulo7->set_precio(20);
			if (Cambio == true)
			{
				cout << "Ingrese el precio pagado por el producto que quiere cambiar: " << endl;
				cin >> PrecioViejo;
				if (PrecioViejo <= Articulo7->get_precio())
				{
					Debe = (Articulo7->get_precio() - PrecioViejo);
					cout << "Le Debe al duenio $ " << Debe << endl;
					Articulo7->set_precio(Debe);
				}
				else
				{
					Afavor = (PrecioViejo - Articulo7->get_precio());
					cout << "Le devolvemos $ " << Afavor << endl;
					Articulo7->set_precio(0);
				}
			}
			cliente->agregarArt(*Articulo7);
			break;

		case 3: //Aca no hicimo lo del cambio porque herramientas no cuenta con esa opcion al alquilarse
			Articulo8 = new Herramientas("Pulidora", 90, "Herramientas");
			Herramienta3 = dynamic_cast<Herramientas*>(Articulo8);
			unsigned int tiempo;
			cout << "Cuantos dias quiere alquilar la Herramineta? ";
			cin >> tiempo;

			Herramienta3->set_Alquiler(true);

			if (Herramienta3 != nullptr)
			{
				if (Herramienta3->get_Alquiler() == true)//me fijo que la herramienta se pueda alquilar
				{

					Herramienta3->set_Estado_art_a_alquilado(true);//lo pongo en true porque lo estan alquilando ahora
					Herramienta3->set_tiempo(tiempo);
					Herramienta3->set_Precio_D(500);
					Herramienta3->set_Precio_s(3000);
					cout << "Precio total al alquilarlo:  " << Herramienta3->get_total_alquilar() << endl;

				}
			}
			Articulo8->set_precio(Herramienta3->get_total_alquilar());
			cliente->agregarArt(*Articulo8);

			if (Herramienta3->get_Estado_art_a_alquilado() == true)//aca nos fijamos esto porque si no esta alquilado no hya seguro a devolver
			{

				PlataSeguro = Herramienta3->get_Precio_S();
				duenio->set_pagar_seguro(PlataSeguro);//esta devuelve la plata del seguro y por eso lo hacemos en otr funcion
				Herramienta3->set_Estado_art_a_alquilado(false);//cuando le devulevo el seguro el me devuleve la Herramienta alquilada

			}
			break;

		case 4:
			Articulo9 = new Articulos_CocinayBano_Bazar("Cortina", 200.0, "cocinabano", Amarillo);
			unsigned int Cant_Art1;
			cout << " Ingrese la cantidad de articulos que quiere: ";
			cin >> Cant_Art1;
			Articulo9->set_cant_art(Cant_Art1);
			Articulo9->set_precio(1000);
			cliente->agregarArt(*Articulo9);
			if (Cambio == true)
			{
				cout << "Ingrese el precio pagado por el producto que quiere cambiar: " << endl;
				cin >> PrecioViejo;
				if (PrecioViejo <= Articulo9->get_precio())
				{
					Debe = (Articulo9->get_precio() - PrecioViejo);
					cout << "Le Debe al duenio $ " << Debe << endl;
					Articulo9->set_precio(Debe);
				}
				else
				{
					Afavor = (PrecioViejo - Articulo9->get_precio());
					cout << "Le devolvemos $ " << Afavor << endl;
					Articulo9->set_precio(0);
				}
			}
			break;


		default:
			cout << " la opcion elegida no existe ";
		}
			
		} while (num < 1 || num>4);
	}
	delete Articulo6;
	delete Articulo7;
	delete Articulo8;
	delete Articulo9;
	delete Herramienta3;
}



void FuncSwitch2(Servicio_cerrajeria* Cerrajero, Despachante* _Despachante, unsigned int k, Plomero* _Plomero, Duenyo_ferreteria* duenio)
{
	cout << "Elija el servicio:  " << endl << "1 Cerrajeria" << endl << "2 Despachante" << endl << "3 Plomero" << endl;
	int num;
	cin >> num;
	string tipoServ, tipoLave;
	bool Permiso;
	string rta,rta2;
	unsigned int PlataCli;

	do {
		switch (num)
		{
		case 1:

			cout << "Quiere hacer una cerradura o una llave?" << endl;
			cin >> tipoServ;
			Cerrajero->set_tipoServ(tipoServ);
			if (Cerrajero->get_tipo_serv() == "Llave" || Cerrajero->get_tipo_serv() == "llave")
			{
				cout << "La llave va a ser magnetica o normal? " << endl;
				cin >> tipoLave;
				Cerrajero->set_tipoLlave(tipoLave);
				if (Cerrajero->get_tipo_llave() == "Magnetica" || Cerrajero->get_tipo_llave() == "magnetica")
				{
					cout << "Tiene permiso para hacer la llave?, respoder con si o no " << endl;
					cin >> rta;
					if (rta == "si" || rta == "Si")
					{
						Permiso = true;
					}
					else
					{
						Permiso = false;
					}
					Cerrajero->set_permiso(Permiso);
					Cerrajero->Permiso_llave();
				}
			}
			Cerrajero->set_PrecServ(8000);
			Cerrajero->realizar_trabajo();
			duenio->set_cobrar(Cerrajero->get_PrecServ());

			cout << "Con cuanto desea abonar: ";
			cin >> PlataCli;

			duenio->set_pagar(PlataCli, Cerrajero->get_PrecServ());

			break;

		case 2:
			_Despachante->set_Cant_prod_entreg(k);
			cout << "La Cantidad de productos a entregar por el despachante segun los productos comprasdos es: " << _Despachante->get_cant_prod();
			_Despachante->set_PrecServ(6000);
			_Despachante->realizar_trabajo();
			duenio->set_cobrar(_Despachante->get_PrecServ());

			cout << "Con cuanto desea abonar: ";
			cin >> PlataCli;

			duenio->set_pagar(PlataCli, _Despachante->get_PrecServ());
			break;

		case 3:
			cout << "Quiere realizar Mantenimiento, Reparacion o Instalacion, escriba su opcion elegida " << endl;
			cin >> rta2;
			if (rta2 == "Matenimiento" || rta2 == "matenimiento")
			{
				_Plomero->set_Mantenimiento(true);
			}
			else if (rta2 == "Reparacion" || rta2 == "reparacion")
			{
				_Plomero->set_rep_inst(true);
				_Plomero->set_Mantenimiento(false);
			}
			else
			{
				_Plomero->set_rep_inst(false);
				_Plomero->set_Mantenimiento(false);
			}

			_Plomero->realizar_trabajo();
			duenio->set_cobrar(_Plomero->get_PrecServ());

			cout << "Con cuanto desea abonar: ";
			cin >> PlataCli;

			duenio->set_pagar(PlataCli, _Plomero->get_PrecServ());
			break;

		default:
			cout << " la opcion elegida no existe ";
		}

	} while (num < 1 || num>3);

	return ;
}


