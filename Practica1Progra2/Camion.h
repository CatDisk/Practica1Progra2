#pragma once
#include"Transporte.h"

class CCamion :public CTransporte {
private:
	int llantas;
	char* motor;
public:
	CCamion(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int llantas, char* motor);
	~CCamion();

	int getLlantas();
	char* getMotor();

	double calcularPrecio();
};