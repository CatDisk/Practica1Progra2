#include "Bus.h"

		CBus::CBus(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int asientos) :CTransporte(modelo, color, annio, seguro, lunasPolarizadas)
		{
			this->asientos = asientos;
		}
		CBus::~CBus(){}
		int		CBus::getAsientos() { return asientos; }
		double	CBus::calcularPrecio() { return asientos * 100 + seguro*0.5 + 35000; }