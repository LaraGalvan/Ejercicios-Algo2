#include <iostream>
#include "punto.h"
#include <string>
#include <cmath>

using namespace std;

int main(){

	Punto a(5,0);
	a.consultar_coordenadas();
	bool esta_sobre_x = a.sobre_eje_x();
	cout << "ESTA SOBRE EJE X? : " << esta_sobre_x << endl;
	bool esta_sobre_y = a.sobre_eje_y();
	cout << "ESTA SOBRE EJE Y: " << esta_sobre_y << endl;
	bool es_origen = a.es_origen_coordenadas();
	cout << "ES ORIGEN DE COORDENADAS?: " << es_origen << endl;
	int distancia_origen = a.distancia_al_origen();
	cout << "La distancia al origen es: " << distancia_origen << endl;
	return 0;
}


