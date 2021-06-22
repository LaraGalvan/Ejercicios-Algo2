#ifndef LISTA_H_
#define LISTA_H_

#include "nodo.h"
#include <iostream>
using namespace std;

class Lista {

private:

    // atributos
    Nodo* primero;
    int largo;

public:

    //Constructor
    //PRE: -
    //POS: crea una pila vacia
    Lista();

    //alta
    //PRE: recibe un Dato d - 0 < pos <= largo + 1
    //POS: agrega el dato d en la pila, en la posicion pos
    void alta(Dato d, int pos);

    //PRE: 0 < pos <= largo
    //POS: devuelve el dato que esta encima de la pila y lo saca
    void baja(int pos);

    //PRE: -
    //POS: devuelve true si la pila esta vacia, false si no
    bool vacia();

    //PRE: 0 < pos <= largo
    //POS: devuelve el dato que esta encima de la pila
    Dato consulta(int pos);

    //PRE: -
    //POST: devuelve el largo
    int obtener_largo();

    //PRE: -
    //POST: Se realiza el producto de un elemento de la lista con su siguiente, insertando el resultado entre medio de ambos
    void insertarProductos();


    //POST: Se realiza la division entre un elemento de la lista con su siguiente si el mismo es divisible. Insertando el
    //		resultado entre medio de ambos
    void separarContiguosDivisibles();


    //POST: Se retornaran en una nueva Lista los elementos de la lista original que se encuentren en posiciones impares
    Lista* eliminarYRetornarImpares();

    //PRE: -
    //POST: muestra por pantalla la lista
    void mostrar();

    //Destructor
    //PRE: -
    //POS: libera la memoria
    ~Lista();

private:
    // PRE:
    // POS:
    Nodo* obtener_nodo(int pos);
};

#endif /* LISTA_H_ */
