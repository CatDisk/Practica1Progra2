#pragma once
#include "Transporte.h"
#include "Camion.h"
#include "Bus.h"

class CArreglo {
private:
	int cap;
	CTransporte** arreglo;
public:
	CArreglo();
	~CArreglo();

	CTransporte* getElemento(int pos);
	int getCap();
	void insertarElemento(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int llantas, char* motor, int asientos, int pos);
	// mi solucion para insertar al inicio / fin, es llamar a este metodo y automaticamente pasar un 0 o cap-1 para esas funciones
	// es completamente valido hacer los 3 metodos diferentes
	void eliminarElemento(int pos);
};