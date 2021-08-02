#include "buscador_resto.h"



Lista<Restaurante*>* Buscador_restaurantes::recomendar_restaurantes(Lista<Restaurante*> *restaurantes,
		Lista<string>* platos_deseados, int precio_maximo){

	Lista<Restaurante*> *recomendados = new Lista<Restaurante*>;
	int pos_recomendado = 1;

	//recorro la lista de restaurantes
	for(int i = 1; i <= restaurantes->obtener_largo(); i++){

		Restaurante* resto = restaurantes->consulta(i); //llamo al restaurante de esa pos

		if((resto->obtener_precio_promedio()) <= precio_maximo){

			if(cantidad_platos(resto, platos_deseados) >= MIN_PLATOS_DESEADOS){
				recomendados->dar_alta(resto, pos_recomendado);
				pos_recomendado++;
			}
		}
	}
	return recomendados;
}


int Buscador_restaurantes::cantidad_platos(Restaurante* resto, Lista<string>* platos_deseados){

	int cant_platos = 0;

	for(int j = 1; j <= resto->obtener_platos()->obtener_largo(); j++){

		if(hay_plato_deseado(resto->obtener_platos()->consulta(j), platos_deseados))
			cant_platos++;
	}
	return cant_platos;
}


bool Buscador_restaurantes::hay_plato_deseado(string nombre_plato, Lista<string>* platos_deseados){

	bool hay_plato = false;

	for(int i = 1; i <= platos_deseados->obtener_largo(); i++){

		if(platos_deseados->consulta(i) == nombre_plato){
			hay_plato = true;
		}
	}
	return hay_plato;
}
