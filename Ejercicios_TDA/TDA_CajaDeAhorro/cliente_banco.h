#ifndef CLIENTE_BANCO_H_
#define CLIENTE_BANCO_H_

#include <string>
using namespace std;

class ClienteBanco{
	//atributos

private:
	string nombre;
	string apellido;
	long int dni;


public:
	//metodos
	ClienteBanco(string nombre, string apellido, long int dni);

	void cambiar_nombre(string nombre_nuevo);

	void cambiar_apellido(string apellido_nuevo);

	string obtener_nombre();

	string obtener_apellido();

	long int obtener_dni();
};

#endif /* CLIENTE_BANCO_H_ */
