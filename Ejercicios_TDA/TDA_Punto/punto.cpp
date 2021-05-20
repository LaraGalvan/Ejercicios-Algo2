#include <iostream>
#include <string>
#include <cmath>
#include "punto.h"

using namespace std;
const int NULO = 0;

Punto::Punto(int x, int y){
	coordenada_x = x;
	coordenada_y = y;
}

void Punto::consultar_coordenadas(){
	cout << "Coordenada x: " << coordenada_x << endl;
	cout << "Coordenada y: " << coordenada_y << endl;
}

void Punto::cambiar_coordenadas(int x, int y){
	coordenada_x = x;
	coordenada_y = y;
}

bool Punto::sobre_eje_x(){
	return ((coordenada_y == NULO) && (coordenada_x != NULO));
}

bool Punto::sobre_eje_y(){
	return ((coordenada_x == NULO) && (coordenada_y != NULO));
}

bool Punto::es_origen_coordenadas(){
	return ((coordenada_x == NULO) && (coordenada_y == NULO));
}

int Punto::distancia_al_origen(){
	return sqrt((coordenada_x*coordenada_x) + (coordenada_y*coordenada_y));
}
