#pragma once
#include "Transporte.h"

class CBus :public CTransporte {
private:
	int asientos;
public:
	CBus(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int asientos);
	~CBus();

	int getAsientos();

	double calcularPrecio();
};