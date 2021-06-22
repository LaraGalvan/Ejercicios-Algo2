#ifndef NODO_H_
#define NODO_H_

typedef int Dato;

class Nodo{

private:
    // atributos
    Dato dato;
    Nodo* siguiente;

public:

    //Constructor
    //PRE: recibe un Dato d
    //POS: crea un nodo con el dato d, y el siguiente en null
    Nodo(Dato d);

    //PRE: recibe un puntero a Nodo
    //POS: modifica el siguiente por ps
    void cambiar_siguiente(Nodo* ps);

    //PRE: -
    //POS: devuelve un puntero al siguiente nodo
    Nodo* obtener_siguiente();

    //PRE: -
    //POS: devuelve el dato que esta en el nodo
    Dato obtener_dato();

};

#endif /* NODO_H_ */
