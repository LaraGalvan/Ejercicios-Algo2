#include <iostream>
#include "fraccion.h"

using namespace std;

Fraccion::Fraccion(int numerador, int denominador) {

    this->numerador = numerador;
    this->denominador = denominador;

}

Fraccion Fraccion::operator + (Fraccion f){
	Fraccion aux(0,1);
	aux.denominador = denominador*f.denominador;
	aux.numerador = (f.denominador*numerador + f.numerador*denominador);
	return aux;

}

void Fraccion::mostrar() {

    cout << this -> numerador << "/" << this -> denominador << endl;
}

Fraccion Fraccion::operator-(Fraccion f){
	f.numerador = -(f.numerador);
	return (operator+(f));
}

Fraccion Fraccion::operator*(Fraccion f) {
	Fraccion aux(0,1);
	aux.numerador = (f.numerador*numerador);
	aux.denominador = (f.denominador*denominador);
	return aux;
}

Fraccion Fraccion::operator/(Fraccion f) {
	Fraccion aux(0,1);
	aux.numerador = f.denominador;
	aux.denominador = f.numerador;
	return (operator*(aux));
}


