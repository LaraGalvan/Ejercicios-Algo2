#include <iostream>
#include "cubo.h"
#include <cmath>
#include <math.h>

using namespace std;

int main(){

	Cubo f(5);
	int lado_cubito = f.obtener_longitud_lado();
	cout << "El lado de mi cubo es: " << lado_cubito << endl;
	f.cambiar_longitud_lado(10);
	int nuevo_lado = f.obtener_longitud_lado();
	cout << "El nuevo lado de mi cubo es: " << nuevo_lado << endl;
	int superficie_cubo = f.obtener_superficie_cubo();
	cout << "La superficie de mi cubo es: " << superficie_cubo << endl;
	int volumen_cubo = f.obtener_volumen();
	cout << "El volumen de mi cubo es: " << volumen_cubo << endl;
	f.cambiar_superficie_cubo(400);
	int superficie_nueva = f.obtener_superficie_cubo();
	nuevo_lado = f.obtener_longitud_lado();

	cout << "La nueva superficie es: " << superficie_nueva << endl;
	cout << "El nuevo lado es: " << nuevo_lado << endl;

	f.cambiar_volumen(50);
	float nuevo_volumen = f.obtener_volumen();
	nuevo_lado = f.obtener_longitud_lado();
	superficie_nueva = f.obtener_superficie_cubo();
	cout << "-----------------------------" << endl;
	cout << "El nuevo volumen es: " << nuevo_volumen << endl;
	cout << "El nuevo lado es: " << nuevo_lado << endl;
	cout << "La nueva superficie es: " << superficie_nueva << endl;




	return 0;
}



