#include "pila_estatica.h"


Pila_estatica::Pila_estatica() {
    ultimo = 0;
}

void Pila_estatica::alta(Dato d) {

	pila[ultimo] = d;
    ultimo++;
}

bool Pila_estatica::llena() {
    return (ultimo == (MAXIMO - 1));
}

Dato Pila_estatica::baja(){

    ultimo--;
    return pila[ultimo];

}

Dato Pila_estatica::consulta(){

    return pila[ultimo - 1];
}


bool Pila_estatica::vacia() {

    return (ultimo == 0);
}
