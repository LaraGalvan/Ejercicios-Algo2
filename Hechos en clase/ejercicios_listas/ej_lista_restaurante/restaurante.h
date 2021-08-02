#ifndef RESTAURANTE_H_
#define RESTAURANTE_H_

#include "lista.h"
#include <iostream>
using namespace std;

class Restaurante{

private:
	//Atributos
	string nombre;
	int precio_promedio;
	Lista<string>* platos;

public:
	//Métodos

	//POST: Crea un restaurante con su nombre, el precio promedio por cubierto y la lista de platos que sirve
	Restaurante(string nombre, int precio_promedio, Lista<string>* platos);

	//POST: Devuelve el nombre del restaurante
	string obtener_nombre();

	//POST: Devuelve el precio promedio
	int obtener_precio_promedio();

	//POST: Devuelve ptr a la lista de platos
	Lista<string>* obtener_platos();

	//Destructor
	~Restaurante(){};

};


#endif /* RESTAURANTE_H_ */
