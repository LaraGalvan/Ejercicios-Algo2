#ifndef HEADERS_PILA_ESTATICA_H_
#define HEADERS_PILA_ESTATICA_H_

const int MAXIMO = 100;

typedef char Dato;

class Pila_estatica {

private:
    // atributos
    Dato pila[MAXIMO];
    int ultimo;

public:
    //Constructor
    //PRE: -
    //POS: crea una pila vacia
    Pila_estatica();

    //alta
    //PRE: recibe un Dato d - la pila no tiene que estar llena
    //POS: agrega el dato d en la pila
    void alta(Dato d);

    //PRE: -
    //POS: devuelve true si la pila esta llena, si no, false
    bool llena();

    //PRE: la pila no tiene que estar vacia
    //POS: devuelve el dato que esta encima de la pila y lo saca
    Dato baja();

    //PRE: -
    //POS: devuelve true si la pila esta vacia, false si no
    bool vacia();

    //PRE: la pila no tiene que estar vacia
    //POS: devuelve el dato que esta encima de la pila
    Dato consulta();

};


#endif /* HEADERS_PILA_ESTATICA_H_ */
