#include <iostream>
#include "cubo.h"
#include <cmath>
#include <math.h>

using namespace std;
const int LADOS_TOTALES = 6;
const float RAIZ_CUBICA = 0.3333333333;

Cubo::Cubo(float lado){
	lado_cubo = lado;
	superficie = (LADOS_TOTALES*(lado_cubo*lado_cubo));
	volumen = (lado_cubo*lado_cubo*lado_cubo);

}

int Cubo::obtener_longitud_lado(){
	return lado_cubo;
}

void Cubo::cambiar_longitud_lado(float lado){
	lado_cubo = lado;
	superficie = (LADOS_TOTALES*(lado_cubo*lado_cubo));
	volumen = (lado_cubo*lado_cubo*lado_cubo);
}

int Cubo::obtener_superficie_cubo(){
	return superficie;
}

void Cubo::cambiar_superficie_cubo(float superficie_cubo){
	superficie = superficie_cubo;
	lado_cubo = sqrt(superficie/LADOS_TOTALES);
	volumen = (lado_cubo*lado_cubo*lado_cubo);
}

float Cubo::obtener_volumen(){
	return volumen;
}

void Cubo::cambiar_volumen(float volumen){
	this->volumen = volumen;
	lado_cubo = pow(volumen, RAIZ_CUBICA);
	superficie = (LADOS_TOTALES*(lado_cubo*lado_cubo));
}
