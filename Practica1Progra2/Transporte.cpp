#include "Transporte.h"

		CTransporte::CTransporte(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas)
		{
			this->modelo = modelo;
			this->color = color;
			this->annio = annio;
			this->seguro = seguro;
			this->lunasPolarizadas = lunasPolarizadas;
		}
		CTransporte::~CTransporte(){}
		char*	CTransporte::getModelo() { return modelo; }
		char*	CTransporte::getColor() { return color; }
		int		CTransporte::getAnnio() { return annio; }
		bool	CTransporte::getSeguro() { return seguro; }
		bool	CTransporte::getLunasPolarizadas() { return lunasPolarizadas; }