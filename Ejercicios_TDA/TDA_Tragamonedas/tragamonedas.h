#ifndef TRAGAMONEDAS_H_
#define TRAGAMONEDAS_H_
#include <string>
using namespace std;

class Tambor {

private:
	int posicion;

public:
	//constructor
	//POST: inicializa a posicion en 0
	Tambor();

	//POST: modifica el valor de posicion con un nro aleatorio entre 1 y 8 inclusive
	void girar();

	//Devuelve el valor de la posicion
	int obtener_posicion();

};

class Tragamonedas{
private:
	Tambor tambor1;
	Tambor tambor2;
	Tambor tambor3;

public:
	//Metodos

	//constructor
	Tragamonedas();

	//destructor
	~Tragamonedas();

	//POST: Devuelve un premio si los tambores son iguales.
	int determinar_premio();

	//POST: modifica los valores de los 3 tambores
	void sortear();

	//Devuelve true si los 3 tambores son iguales, False en caso contrario
	bool otorgar_premio();
};

#endif /* TRAGAMONEDAS_H_ */
