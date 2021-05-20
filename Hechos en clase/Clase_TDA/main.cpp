#include <iostream>
#include "fraccion.h"

using namespace std;

int main(){

	Fraccion f1(3,4), f2(2,1);
	Fraccion f3(f1 + f2);
	f3.mostrar();
	f3 = f1.multiplicar(f2);
	f3.mostrar();
	f3 = f1.division(f2);
	f3.mostrar();
	f3 = f1.restar(f2);
	f3.mostrar();

	//f1.pasar_a_fraccion(0.75);
	//f2.pasar_a_fraccion(2.0);
	//f3 = f1.division(f2);
	//f1.mostrar();
	//f2.mostrar();
	//f3.mostrar();


	return 0;
}
