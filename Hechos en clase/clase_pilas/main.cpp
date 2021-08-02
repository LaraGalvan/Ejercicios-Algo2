#include "pila_estatica.h"
#include "pila_dinamica.h"

#include <iostream>

using namespace std;

int main(){

	Pila_dinamica p;
	p.alta(5);
	p.alta(7);
	p.alta(8);

	while(!p.vacia()){
		cout << " " << p.baja() << endl;
	}
	return 0;
}

