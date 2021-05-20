#include <iostream>
#include "vehiculo.h"
#include "auto.h"
#include "camion.h"
#include "camioneta.h"

using namespace std;

int main(){

	Auto* automovil = new Auto(10.0, 2.0, 3.0);

	cout << automovil->valor_mercado() << endl;
	cout << automovil->coeficiente_impositivo() << endl;

	delete automovil;

	return 0;
}
