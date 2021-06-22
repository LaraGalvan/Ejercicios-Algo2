#include "lista.h"

Lista::Lista() {
    primero = 0;
    largo = 0;
}

void Lista::alta(Dato d, int pos) {

    Nodo* nuevo = new Nodo(d); //se crea un nuevo nodo

    //si se lo quiere agregar al inicio
    if (pos == 1) {
    	//el siguiente del nodo nuevo pasa a ser el primero
        nuevo->cambiar_siguiente(primero);
        //luego el nodo nuevo queda en primer lugar
        primero = nuevo;
    }
    //si la pos es distinta de 1
    else {
    	//llama al nodo anterior a esa posicion
        Nodo* anterior = obtener_nodo(pos - 1);
        //nuevo apunta al siguiente del anterior
        nuevo->cambiar_siguiente(anterior->obtener_siguiente());
        //ese anterior apunta a nuevo
        anterior->cambiar_siguiente(nuevo);
    }

    largo++;
}

void Lista::baja(int pos) {
    Nodo* borrar = primero;

    if (pos == 1)
        primero = borrar->obtener_siguiente();
    else {
        Nodo* anterior = obtener_nodo(pos - 1);
        borrar = anterior->obtener_siguiente();
        anterior->cambiar_siguiente(borrar->obtener_siguiente());
    }
    largo--;
    delete borrar;
}

bool Lista::vacia() {

    return (largo == 0);
}


Dato Lista::consulta(int pos) {

    Nodo* aux = obtener_nodo(pos);
    return aux->obtener_dato();
}


int Lista::obtener_largo() {

    return (largo);

}


void Lista::mostrar(){

	cout << "[";

	if(!vacia()){

		for(int i = 1; i < largo; i++){
			cout << this->consulta(i) << " " << ",";
		}
		cout << this->consulta(largo);
	}

	cout << "]";
}


void Lista::insertarProductos(){

	for(int i = 1; (i+1) <= largo; i = i+2){

		this->alta((consulta(i)*consulta(i+1)), i+1);
	}
}


void Lista::separarContiguosDivisibles(){

	for(int i = 1; (i+1) <= this->largo; i++){

		if((consulta(i)%consulta(i+1)) == 0){

			this->alta((consulta(i)/consulta(i+1)), i+1);
			i++;
		}
	}
}

Lista* Lista::eliminarYRetornarImpares(){

	Lista* lista_eliminados = new Lista(); //creo la nueva lista
	int pos_pares = 1;
	int tope = this->largo; //tope de la nueva lista

	for(int i = 1; i < tope; i++){

		if((i%2) == 0){

			lista_eliminados->alta(this->consulta(pos_pares+1), pos_pares);

			pos_pares++;

			this->baja(pos_pares);
		}
	}
	return lista_eliminados;
}



Lista::~Lista() {

    while (! vacia())

        baja(1);
}


Nodo* Lista::obtener_nodo(int pos) {
    Nodo* aux = primero;
    for(int i = 1; i < pos; i++)
        aux = aux->obtener_siguiente();
    return aux;
}

