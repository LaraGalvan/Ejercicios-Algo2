#include <iostream>
#include "nota.h"

using namespace std;

const int NOTA_CUATRO = 4;
const int NOTA_DIEZ = 10;

Nota::Nota(int valor_inicial){
	nota = valor_inicial;
}

int Nota::obtener_valor(){
	return nota;
}

bool Nota::aprobado(){
	bool es_aprobado = false;
	if(nota >= NOTA_CUATRO && nota <= NOTA_DIEZ){
		es_aprobado = true;
	}
	return es_aprobado;
}

bool Nota::desaprobado(){
	bool es_desaprobado = false;
	if(nota < NOTA_CUATRO){
		es_desaprobado = true;
	}
	return es_desaprobado;
}

void Nota::recuperar(int valor_nuevo){
	if(nota < valor_nuevo){
		nota = valor_nuevo;
	}
}
