#ifndef RECTANGULO_H_
#define RECTANGULO_H_

class Rectangulo{
private:
	//atributos
	int base;
	int altura;

public:
	//metodos
	//PRE: tienen que ser numeros mayores a cero
	//POST: le asigna los valores a los atributos
	Rectangulo(int base, int altura);

	//retorna el valor de la base
	int obtener_valor_base();

	//POST: retorna el valor de la altura
	int obtener_valor_altura();

	//POST: modifica los valores de la base y la altura
	void modificar_valores(int base_nueva, int altura_nueva);

	//POST: devuelve el valor del perimetro
	int obtener_perimetro();

	//POST: devuelve el valor del area del rectangulo
	int obtener_area();
};

#endif /* RECTANGULO_H_ */
