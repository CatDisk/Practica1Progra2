#include "Camion.h"

		CCamion::CCamion(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int llantas, char* motor):CTransporte(modelo, color, annio, seguro, lunasPolarizadas)
		{
			this->llantas = llantas;
			this->motor = motor;
		}
		CCamion::~CCamion(){}
		int		CCamion::getLlantas() { return llantas; }
		char*	CCamion::getMotor() { return motor; }
		double	CCamion::calcularPrecio() { return llantas * 1500 + seguro*0.3 + 45000; }