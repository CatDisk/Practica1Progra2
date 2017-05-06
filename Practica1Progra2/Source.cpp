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
			cout << "[6] Registrar un transporte al inicio" << endl;
			cout << "[7] Buscar un transporte segun el año" << endl;
			cout << "[8] Imprimir reportes" << endl;
			cout << "[0] Salir del programa" << endl;
			cout << "===========================================" << endl;
			cout << "Ingrese la operacion deseada: ";
			cin >> op;
		} while (op < 0 || op > 8);
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
		default:
			break;
		}
	} while (op != 0);

	return 0;
}