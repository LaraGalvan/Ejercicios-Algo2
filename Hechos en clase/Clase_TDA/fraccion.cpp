#include <iostream>
#include "fraccion.h"

using namespace std;

const int PRECISION = 10000;

void Fraccion::cambiar_numerador(int n){
	numerador = n;
}

void Fraccion::cambiar_denominador(int d){
	denominador = d;
}

Fraccion::Fraccion(int n, int d){
	numerador = n;
	denominador = d;
	cout << "Ejecuto el constructor con parametros" << endl;
}

void Fraccion::mostrar(){
	//codigo
	cout << numerador << "/" << denominador << endl;
}

void Fraccion::simplificar(){
	int min = denominador;
	if(numerador < denominador){
		min = numerador;
	}
	for(int i = min; i > 1; i--){
		if((denominador % i == 0) && (numerador % i == 0)){
			denominador /= i;
			numerador /= i;
		}
	}
}
Fraccion Fraccion::multiplicar(Fraccion f){

	Fraccion aux(0,1);
	aux.numerador = f.numerador * numerador;
	aux.denominador = f.denominador * denominador;
	aux.simplificar();
	return aux;
}

Fraccion Fraccion::division(Fraccion f){
	Fraccion aux(0,1);
	aux.numerador = f.denominador;
	aux.denominador = f.numerador;
	return (multiplicar(aux));
}

Fraccion Fraccion::operator +(Fraccion f){
	Fraccion aux(0,1);
	aux.denominador = denominador * f.denominador;
	aux.numerador = (f.denominador*numerador + f.numerador*denominador);
	aux.simplificar();
	return aux;
}

Fraccion Fraccion::restar(Fraccion f){
	f.numerador = -(f.numerador);
	return (operator+(f));
}

void Fraccion::pasar_a_fraccion(float n) {
    numerador = int(n * PRECISION);
    denominador = PRECISION;
    simplificar();
}

