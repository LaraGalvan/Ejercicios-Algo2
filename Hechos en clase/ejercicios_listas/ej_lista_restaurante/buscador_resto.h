#ifndef BUSCADOR_RESTO_H_
#define BUSCADOR_RESTO_H_

#include "restaurante.h"

const int MIN_PLATOS_DESEADOS = 2;

class Buscador_restaurantes{

public:
	//Métodos

	//POST: busca en “restaurantes” aquellos que tienen por lo menos dos platos de la lista “platos_deseados”
	//		y un precio promedio menor o igual a precio_maximo.
	// Devuelve una lista con los restaurantes que cumplen con estas características.

	Lista<Restaurante*>* recomendar_restaurantes(Lista<Restaurante*>* restaurantes, Lista<string>* platos_deseados,
			int precio_maximo);


	//PRE: Recibe un plato de tipo string y la lista de platos deseados
	//POST: Devuelve true si plato es igual a uno de los platos de la lista
	bool hay_plato_deseado(string plato, Lista<string>* platos_deseados);


	//PRE: Recibe un restaurante junto a la lista de platos deseados
	//POST: Devuelve un entero que representa la cantidad de platos deseados encontrados
	int cantidad_platos(Restaurante* resto, Lista<string>* platos_deseados);

};


#endif /* BUSCADOR_RESTO_H_ */
