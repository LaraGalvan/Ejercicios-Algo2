#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

class Fraccion {
	//Atributos
private:
	int numerador;
	int denominador;


	//Metodos
public:

	Fraccion(int n, int d);

	//PRE: la variable n es un entero positivo al igual que d y distinto de cero
	//POST: Cambia los valores de el numerador y denominador
	//Fraccion(int n, int d);

	//PRE: la variable n tiene que ser un entero positivo
	//POST: cambia al numerador por el valor de n
	void cambiar_numerador(int n);

	//PRE: la variable d tiene que ser un entero distinto de cero
	//POST: cambia el denominador por el valor de d
	void cambiar_denominador(int d);

	//PRE:
	//POST: Reduce la fraccion a su minima expresion
	void simplificar();

	//PRE: f tiene que ser una Fraccion valida
	//POST: Devuelve una nueva Fraccion que es el producto de this * f
	Fraccion multiplicar(Fraccion f);

	//PRE:
	//POST: Se sumaran los numerdores y denominadores
	Fraccion operator+(Fraccion f);

	//PRE:
	//POST:
	Fraccion restar(Fraccion f);

	//PRE: El numerador de f no puede ser cero
	//POST: Hace la division y la devuelve
	Fraccion division(Fraccion f);

	void pasar_a_fraccion(float n);

	//PRE:
	//POST: Muestra la fraccion en formato num/dem
	void mostrar();
};

#endif /* FRACCION_H_ */
