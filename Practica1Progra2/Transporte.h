#pragma once
#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace System;
using namespace std;

class CTransporte {
protected:
	char* modelo;
	char* color;
	int annio;
	bool seguro;
	bool lunasPolarizadas;
public:
	CTransporte(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas);
	~CTransporte();

	char* getModelo();
	char* getColor();
	int getAnnio();
	bool getSeguro();
	bool getLunasPolarizadas();

	virtual double calcularPrecio()abstract; // Este metodo se redefine en las clases hijas CCamnion y CBus 
};