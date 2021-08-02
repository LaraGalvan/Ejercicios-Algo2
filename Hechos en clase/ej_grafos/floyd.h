#ifndef FLOYD_H_
#define FLOYD_H_

#include "lista.h"
#include "vertice.h"

#include <iostream>

using namespace std;

class Floyd {
private:

    int ** matrizCostos;
    int ** matrizCaminos;
    int cantidadVertices;
    Lista<Vertice> * vertices; //lista de vertices

    //pre: requiere una matriz de adyacencia bien cargada
    //post: crea la matriz costo inicializandola con los valores de la matriz de adyacencia
    int ** crearMatrizCostos(int ** matrizAdyacencia);

    //post: crea una matriz de caminos
    int ** crearMatrizCaminos();

    //post: libera la memora de las matrices de costos y caminos
    void liberarMatrices();

    void mostrarMatrices();

public:
    Floyd(Lista<Vertice> *vertices);

    //post:calcula las matrices de costos y caminos.
    void calcularMatrices(int ** matrizAdyacencia);

    //post: muestra el camino minimo entre el origen y el destino imprimiendo los vertices a visitar y su costo final
    void caminoMinimo(int origen, int destino);

    //post: libera la memoria pedida
    ~Floyd();
};



#endif /* FLOYD_H_ */
