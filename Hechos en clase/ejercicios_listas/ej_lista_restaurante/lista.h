#ifndef LISTA_H_
#define LISTA_H_

#include "nodo.h"
#include <iostream>
using namespace std;


template < typename Dato >

class Lista{

private:

	Nodo<Dato>* primero;

	int largo;

	Nodo<Dato>* actual; //nuevo atributo

public:

	//Constructor
	//POST: Crea una lista vacia
	Lista();

	//PRE: recibe un Dato d y un entero que representa una posicion. 0 < pos <= largo + 1
	//POS: agrega el dato d en la posicion pos
	void dar_alta(Dato d, int pos);


	//PRE: recibe un entero que representa una posicion. 0 < pos <= largo
	//POS: se elimina el nodo que esta en esa posicion
	void dar_baja(int pos);


	//POS: devuelve true si la lista esta vacia, false si no
	bool vacia();


	//PRE: Recibe una posicion de tipo entero. 0 < pos <= largo
	//POST: Devuelve el dato de la lista que esta en la posicion pos
	Dato consulta(int pos);


	//POST: Devuelve el largo de la lista
	int obtener_largo();


	//POST: Muestra por pantalla la lista
	void mostrar();


	//Reinicia el puntero actual a la primera posición (o nulo si la lista es vacía)
	//PRE: -
	//POST: pone el puntero a la primera posición o apuntando a NULL
	void reiniciar();


	// consulta si hay un elemento siguiente (si el actual no apunta a NULL)
	//PRE:
	//POST: devuelve true si el actual no apunta a NULL, false de lo contrario
	bool hay_siguiente();


	//Devuelve el siguiente elemento (el elemento que apunta actual)
	//PRE: hay_siguiente tiene que haber devuelto true previamente
	//POST: devuelve el elemento actual y avanza
	Dato siguiente();



	//Destructor
	//POST: Libera todos los elementos de la lista
	~Lista();


private:

	//PRE: Recibe una posicion de tipo entero
	//POST: Devuelve el nodo que esta en la posicion pasada por parametro
	Nodo<Dato>* obtener_nodo(int pos);

};


template < typename Dato >

Lista<Dato>::Lista(){

	primero = 0;
	largo = 0;
	actual = 0;
}

template < typename Dato >

void Lista<Dato>::dar_alta(Dato d, int pos){

	Nodo<Dato>* nuevo = new Nodo<Dato>(d);

	if(pos == 1){
		nuevo->cambiar_siguiente(primero);
		primero = nuevo;
	}
	else{
		Nodo<Dato>* anterior = obtener_nodo(pos-1);
		nuevo->cambiar_siguiente(anterior->obtener_siguiente());
		anterior->cambiar_siguiente(nuevo);
	}
	largo++;
}

template < typename Dato >

Nodo<Dato>* Lista<Dato>::obtener_nodo(int pos){

	Nodo<Dato>* aux = primero;
	for(int i = 1; i < pos; i++)
		aux = aux->obtener_siguiente();

	return aux;
}

template < typename Dato >

void Lista<Dato>::dar_baja(int pos){

	Nodo<Dato>* borrar = primero;

	if(pos == 1)
		primero = borrar->obtener_siguiente();

	else{
		Nodo<Dato>* anterior = obtener_nodo(pos-1);
		borrar = anterior->obtener_siguiente();
		anterior->cambiar_siguiente(borrar->obtener_siguiente());
	}

	largo--;
	delete borrar;
}


template < typename Dato >
bool Lista<Dato>::vacia(){

	return (largo == 0);
}

template < typename Dato >
Dato Lista<Dato>::consulta(int pos){

	Nodo<Dato>* aux = obtener_nodo(pos);

	return aux->obtener_dato();
}


template < typename Dato >
int Lista<Dato>::obtener_largo(){

	return largo;
}


template < typename Dato >
void Lista<Dato>::mostrar(){

	if(!vacia()){

		for(int i = 1; i <= largo; i++){

			cout << consulta(i) << " " << ",";
		}
		cout << "" << endl;
	}
}


template < typename Dato >
Lista<Dato>::~Lista(){

	while(!vacia()){
		dar_baja(1);
	}
}


template < typename Dato >
void Lista<Dato>::reiniciar(){

	if(!vacia())
		actual == 0;
	actual = primero;
}

template < typename Dato >
bool Lista<Dato>::hay_siguiente(){

	if(actual)
		return true;
	return false;
}


template < typename Dato >
Dato Lista<Dato>::siguiente(){

	Nodo<Dato>* aux = actual;
	actual = actual->obtener_siguiente();
	return aux;
}



#endif /* LISTA_H_ */
