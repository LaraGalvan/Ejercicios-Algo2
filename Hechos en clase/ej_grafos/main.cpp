#include "grafo.h"
#include <iostream>


int main() {

    Grafo grafo;
    grafo.agregarVertice("A");
    grafo.agregarVertice("B");
    grafo.agregarVertice("C");
    grafo.agregarVertice("D");
    grafo.agregarVertice("E");
    grafo.agregarVertice("F");


    grafo.agregarCamino("A", "C", 8);
    grafo.agregarCamino("C", "B", 7);
    grafo.agregarCamino("C", "D", 5);
    grafo.agregarCamino("D", "B", 1);
    grafo.agregarCamino("E", "A", 1);
    grafo.agregarCamino("E", "D", 5);

    grafo.mostrarGrafo();
    grafo.calcularMatricesFloyd();
    grafo.caminoMinimo("A", "B");
    grafo.caminoMinimo("B", "A");
    grafo.caminoMinimo("B", "C");
    grafo.caminoMinimo("A", "A");

    grafo.caminoMinimo("A", "F");




    return 0;
}
