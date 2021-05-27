#include "parser.h"
#include "empleado.h"
#include "administrativo.h"
#include "director.h"
#include "jefe_de_area.h"
#include <map>
#include <iostream>

using namespace std;

Parser::Parser(char** argv){
	this->entrada = argv;
}


Empleado* Parser::procesar_entrada(){

	map<string, Empleado*> dic;

	dic["administrativo"] = new Administrativo(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
	dic["director"] = new Director(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());
	dic["jefe_de_area"] = new JefeArea(this->legajo(), this->nombre(), this->apellido(), this->salario(), this->antiguedad());

	return dic[this->tipo_empleado()];
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

