#include "Arreglo.h"
#include "Transporte.h"
#include "Camion.h"
#include "Bus.h"

		CArreglo::CArreglo()
		{
			cap = 0;
			arreglo = new CTransporte*[cap];
		}
		CArreglo::~CArreglo()
		{
			if (arreglo != 0)
				delete[] arreglo;
		}
		CTransporte*	CArreglo::getElemento(int pos) { return arreglo[pos]; }
		int				CArreglo::getCap() { return cap; }
void			CArreglo::insertarElemento(char* modelo, char*color, int annio, bool seguro, bool lunasPolarizadas, int llantas, char* motor, int asientos, int pos)
{
	CTransporte** aux = new CTransporte*[cap + 1];
	CTransporte* objeto;
	int j = 0;
	if (llantas != NULL && motor != NULL)
	{
		objeto = new CCamion(modelo, color, annio, seguro, lunasPolarizadas, llantas, motor);
	}
	else if (asientos != NULL)
	{
		objeto = new CBus(modelo, color, annio, seguro, lunasPolarizadas, asientos);
	}
	for (int i = 0; i < cap; i++)
	{
		if (i == pos)
		{
			aux[j] = objeto;
			j++;
		}
		aux[j] = arreglo[i];
		j++;
	}
	if (pos == cap)
		aux[cap] = objeto;
	cap++;

	if (arreglo != NULL)
		delete[] arreglo;

	arreglo = aux;
}

void CArreglo::eliminarElemento(int pos)
{
	CTransporte** aux = new CTransporte*[cap - 1];
	int j = 0;
	for (int i = 0; i < cap-1; i++)
	{
		if (i == pos)
			j++;
		aux[i] = arreglo[j];
		j++;
	}
	if (arreglo != NULL)
		delete[] arreglo;

	cap--;

	arreglo = aux;
}
