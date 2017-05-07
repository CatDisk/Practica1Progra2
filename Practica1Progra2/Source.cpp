#include "Transporte.h"
#include "Camion.h"
#include "Bus.h"
#include "Arreglo.h"

int main() {
	CArreglo *oArreglo = new CArreglo;
	char* modelo;
	char* color;
	int annio;
	bool seguro;
	bool lunasPolarizadas;
	int asientos;
	int llantas;
	char* motor;
	int op;
	int pos;
	int tipo;
	bool elementoEliminado;

	do
	{
		do
		{
			cout << "===========================================" << endl;
			cout << "[1] Registrar un transporte al inicio" << endl;
			cout << "[2] Registrar un transporte al final" << endl;
			cout << "[3] Registrar un transporte en una posicion" << endl;
			cout << "[4] Eliminar un transporte en una posicion" << endl;
			cout << "[5] Eliminar todos los transportes de un modelo" << endl;
			cout << "[6] Buscar un transporte segun el año" << endl;
			cout << "[7] Imprimir reportes" << endl;
			cout << "[0] Salir del programa" << endl;
			cout << "===========================================" << endl;
			cout << "Ingrese la operacion deseada: ";
			cin >> op;
		} while (op < 0 || op > 7);
		if (op >= 1 && op <= 3)
		{
			modelo = new char[20];
			color = new char[20];
			motor = new char[20];
			do
			{
				cout << "===========================================" << endl;
				cout << "[1] Ingresar nuevo Camion" << endl;
				cout << "[2] Ingresar nuevo Bus" << endl;
				cout << "===========================================" << endl;
				cout << "Ingrese la operacion deseada: ";
				cin >> tipo;
			} while (tipo < 1 || tipo > 2);
			cout << "===========================================" << endl;
			cin.ignore();
			cout << "Modelo: ";
			cin.getline(modelo, 20);
			cout << "Color: ";
			cin.getline(color, 20);
			cout << "Annio: ";
			cin >> annio;
			cout << "Tiene seguro? (1=si 0=no) ";
			cin >> seguro;
			cout << "Tiene lunas polarizadas? (1=si 0=no) ";
			cin >> lunasPolarizadas;
			if (tipo == 1)
			{
				cout << "Cantidad de llantas: ";
				cin >> llantas;
				cout << "Tipo de motor: ";
				cin.ignore();
				cin.getline(motor, 20);
			}
			else
			{
				cout << "Cantidad de asientos: ";
				cin >> asientos;
			}
		}
		switch (op)
		{
		case 1:
			if (tipo == 1)
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, llantas, motor, NULL, 0);
			else
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, NULL, NULL, asientos, 0);
			break;
		case 2:
			if (tipo == 1)
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, llantas, motor, NULL, oArreglo->getCap());
			else
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, NULL, NULL, asientos, oArreglo->getCap());
			break;
		case 3:
			cout << "===========================================" << endl;
			cout << "Ingrese la posicion deseada (de 0 a " << oArreglo->getCap() << "): ";
			cin >> pos;
			if (tipo == 1)
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, llantas, motor, NULL, pos);
			else
				oArreglo->insertarElemento(modelo, color, annio, seguro, lunasPolarizadas, NULL, NULL, asientos, pos);
			break;
		case 4:
			cout << "===========================================" << endl;
			cout << "Ingrese la posicion deseada (de 0 a " << oArreglo->getCap() - 1 << "): ";
			cin >> pos;
			oArreglo->eliminarElemento(pos);
			break;
		case 5:
			/*
			modelo = new char[20];
			cin.ignore();
			cout << "===========================================" << endl;
			cout << "Ingrese el modelo de transporte que desea eliminar: ";
			cin.getline(modelo, 20);
			do
			{
				elementoEliminado = false;
				int i = 0;
				do
				{
					char* modelo1 = oArreglo->getElemento(i)->getModelo();
					if (strcmp(modelo, modelo1) == 0)
					{
						oArreglo->eliminarElemento(i);
						elementoEliminado = true;
					}
					else
						i++;
				} while (!elementoEliminado || i < oArreglo->getCap());
			} while (elementoEliminado);
			cout << "Todos los transportes del modelo \"" << modelo << "\" fueron eliminados!" << endl;
			*/
			break;
		case 6:
			cout << "===========================================" << endl;
			cout << "Ingrese el año de fabricacion del transporte: ";
			cin >> annio;
			for (int i = 0; i < oArreglo->getCap(); i++)
			{
				if (oArreglo->getElemento(i)->getAnnio() == annio)
				{
					cout << "===========================================" << endl;
					cout << "Transporte numero: " << i << endl;
					cout << "Modelo: " << oArreglo->getElemento(i)->getModelo() << endl;
					cout << "Color: " << oArreglo->getElemento(i)->getColor() << endl;
					cout << "Precio: " << oArreglo->getElemento(i)->calcularPrecio() << endl;
				}
			}
			break;
		case 7:
			break;
		default:
			break;
		}
	} while (op != 0);

	return 0;
}