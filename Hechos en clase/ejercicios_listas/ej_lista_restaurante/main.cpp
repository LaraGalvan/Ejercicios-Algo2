#include "buscador_resto.h"
#include "lista.h"


int main(){

	Lista<string>* platos_resto1 = new Lista<string>();

	platos_resto1->dar_alta("pizza", 1);
	platos_resto1->dar_alta("tarta", 2);
	platos_resto1->dar_alta("empanadas", 3);

	Restaurante* resto_1 = new Restaurante("Kentucky", 400, platos_resto1);

	Lista<string>* platos_resto2 = new Lista<string>();

	platos_resto2->dar_alta("hamburguesas", 1);
	platos_resto2->dar_alta("fritas", 2);
	platos_resto2->dar_alta("milanesa", 3);
	platos_resto2->dar_alta("pizza", 4);

	Restaurante* resto_2 = new Restaurante("Palotes", 550, platos_resto2);


	Lista<string>* platos_resto3 = new Lista<string>();

	platos_resto3->dar_alta("sushi", 1);
	platos_resto3->dar_alta("sorrentinos", 2);
	platos_resto3->dar_alta("langostinos", 3);

	Restaurante* resto_3 = new Restaurante("Casa Cavia", 800, platos_resto3);


	Lista<string>* platos_resto4 = new Lista<string>();

	platos_resto4->dar_alta("waffles", 1);
	platos_resto4->dar_alta("helados", 2);
	platos_resto4->dar_alta("tortas", 3);
	platos_resto4->dar_alta("panqueques", 4);

	Restaurante* resto_4 = new Restaurante("Muu", 500, platos_resto4);


	Lista<Restaurante*>* restos = new Lista<Restaurante*>; //lista de todos los restos

	restos->dar_alta(resto_1, 1);
	restos->dar_alta(resto_2, 2);
	restos->dar_alta(resto_3, 3);
	restos->dar_alta(resto_4, 4);

	Lista<string>* platos_fav = new Lista<string>(); // lista de platos deseados

	platos_fav->dar_alta("pizza", 1);
	platos_fav->dar_alta("empanadas", 2);
	platos_fav->dar_alta("waffles", 3);
	platos_fav->dar_alta("helados", 4);
	platos_fav->dar_alta("hamburguesas", 5);


	Buscador_restaurantes busca_resto;
	Lista<Restaurante*>* restos_recomendados; //lista de restos recomendados

	restos_recomendados = busca_resto.recomendar_restaurantes(restos, platos_fav, 900);

	if(restos_recomendados->vacia()){
		cout << "No hay restaurantes para recomendar :( " << endl;
	}
	else{
		cout << "LISTA DE RESTAURANTES RECOMENDADOS" << endl;
		for(int i = 1; i <= restos_recomendados->obtener_largo(); i++){

			cout << i << " " << restos_recomendados->consulta(i)->obtener_nombre() << endl;
		}
	}

	delete platos_resto1;
	delete resto_1;
	delete platos_resto2;
	delete resto_2;
	delete platos_resto3;
	delete resto_3;
	delete platos_resto4;
	delete resto_4;
	delete restos;
	delete platos_fav;
	delete restos_recomendados;

	return 0;
}




