#include <iostream>
#include "rectangulo.h"

using namespace std;

const int NUMERO_DOS = 2;

Rectangulo::Rectangulo(int x, int y){
	base = x;
	altura = y;
}

int Rectangulo::obtener_valor_base(){
	return base;
}

int Rectangulo::obtener_valor_altura(){
	return altura;
}

void Rectangulo::modificar_valores(int base_nueva, int altura_nueva){
	base = base_nueva;
	altura = altura_nueva;
}

int Rectangulo::obtener_perimetro(){
	return (NUMERO_DOS*(base+altura));
}

int Rectangulo::obtener_area(){
	return (base*altura);
}
