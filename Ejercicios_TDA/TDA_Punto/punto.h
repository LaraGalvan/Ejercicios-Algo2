#ifndef PUNTO_H_
#define PUNTO_H_

class Punto{
private:
	int coordenada_x;
	int coordenada_y;

public:
	//Constructor con parametros
	//Carga los valores de las coordenadas
	Punto(int x, int y);

	//POST: imprime las coordenadas
	void consultar_coordenadas();

	//POST: cambia el valor de las coordenadas
	void cambiar_coordenadas(int x, int y);

	//PRE: -
	//POST: devuelve true si y = 0, false en caso contrario
	bool sobre_eje_x();

	//PRE: -
	//POST: devuelve true si x = 0, false en caso contrario
	bool sobre_eje_y();

	//PRE:
	//POST: devuelve true si tanto x como y son cero
	bool es_origen_coordenadas();

	//Devuelve la distancia del punto al origen de coordenadas
	int distancia_al_origen();
};

#endif /* PUNTO_H_ */
