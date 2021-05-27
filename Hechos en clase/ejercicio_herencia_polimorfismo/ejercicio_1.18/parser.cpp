#include "parser.h"
#include "empleado.h"
#include "administrativo.h"
#include "director.h"
#include "jefe_de_area.h"
#include <map>
#include <iostream>
#include <ctime>

using namespace std;

Parser::Parser(char** argv){
	this->entrada = argv;
}


Empleado* Parser::procesar_entrada(){

	srand((unsigned) time (0));
	int numero_aleatorio = rand()%(101);
	cout << "Numero aleatorio: " << numero_aleatorio << endl;

	if(numero_aleatorio >= 0 && numero_aleatorio <= 69){
		cout << "administrativo" << endl;
		return new Administrativo(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
	}
	else if(numero_aleatorio >= 70 && numero_aleatorio <= 89){
		cout << "Jefe de area" << endl;
		return new JefeArea(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
	}
	else{
		cout << "Director" << endl;
		return new Director(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
	}
}

string Parser::tipo_empleado(){

	return this->entrada[1];
}

unsigned int Parser::legajo(){

	return atoi(this->entrada[2]);
}

string Parser::nombre(){

	return this->entrada[3];
}


string Parser::apellido(){

	return this->entrada[4];
}

unsigned int Parser::salario(){

	return atoi(this->entrada[5]);
}

unsigned int Parser::antiguedad(){

	return atoi(this->entrada[6]);
}

