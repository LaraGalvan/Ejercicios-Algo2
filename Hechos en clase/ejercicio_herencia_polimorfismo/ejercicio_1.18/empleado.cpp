#include "empleado.h"
#include <iostream>
#include <string>

using namespace std;

Empleado::Empleado(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad){

	this->legajo = legajo;
	this->nombre = nombre;
	this->apellido = apellido;
	this->salario = salario;
	this->antiguedad = antiguedad;
}


void Empleado::visualizar_caracteristicas(){

	cout << "Legajo: " << legajo << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "Salario: " << salario << endl;
	cout << "Antiguedad: " << antiguedad << endl;

}
