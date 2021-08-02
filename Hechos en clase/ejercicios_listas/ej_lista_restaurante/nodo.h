#ifndef NODO_H_
#define NODO_H_

template < typename Dato >

class Nodo{

private:
	Dato dato;
	Nodo <Dato>* siguiente;

public:

	//Constructor
	//PRE: Recibe un dato d
	//POST: crea un nodo con el dato d y siguiente en null
	Nodo(Dato d);


	//PRE: recibe un puntero a Nodo
	//POS: modifica el siguiente por ps
	void cambiar_siguiente(Nodo<Dato>* ps);


	//POS: devuelve un puntero al siguiente nodo
	Nodo<Dato>* obtener_siguiente();


	//PRE: -
    //POS: devuelve el dato que esta en el nodo
	Dato obtener_dato();

};

template < typename Dato >
Nodo<Dato>::Nodo(Dato d){

	dato = d;
	siguiente = 0;
}


template < typename Dato >
void Nodo<Dato>::cambiar_siguiente(Nodo<Dato>* ps){

	siguiente = ps;
}


template < typename Dato >
Nodo<Dato>* Nodo<Dato>::obtener_siguiente(){

	return siguiente;
}


template < typename Dato >
Dato Nodo<Dato>::obtener_dato(){

	return dato;
}


#endif /* NODO_H_ */
