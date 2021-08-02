#ifndef VERTICE_H_
#define VERTICE_H_

#include <iostream>
using namespace std;

class Vertice {
/*ATRIBUTOS*/
private:
    string nombre;
/*MÉTODOS*/
public:
    Vertice(string nombre);
    //post: obtiene el nombre del vertice
    string obtenerNombre();
    ~Vertice();
};



#endif /* VERTICE_H_ */
