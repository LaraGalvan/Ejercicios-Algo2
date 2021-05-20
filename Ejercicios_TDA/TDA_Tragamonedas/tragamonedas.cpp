#include <iostream>
#include "tragamonedas.h"
#include <string>
#include <cstdlib>

using namespace std;

Tambor::Tambor(){
	posicion = 0;
}

void Tambor::girar(){

	posicion = (1+rand()%(8));
}

int Tambor::obtener_posicion(){
	return posicion;
}

//--------------------------------------------
Tragamonedas::Tragamonedas(){
	tambor1 = 0, tambor2 = 0, tambor3 = 0;
}

void Tragamonedas::sortear(){
	tambor1.girar();
	tambor2.girar();
	tambor3.girar();
}

bool Tragamonedas::otorgar_premio(){
	bool otorga_premio = false;
	if((tambor1.obtener_posicion() == tambor2.obtener_posicion()) && (tambor1.obtener_posicion() == tambor3.obtener_posicion())){
		otorga_premio = true;
	}
	return otorga_premio;
}

int Tragamonedas::determinar_premio(){
	if(otorgar_premio()){
		return (1+rand()&(10));
	}
	return 0;
}
