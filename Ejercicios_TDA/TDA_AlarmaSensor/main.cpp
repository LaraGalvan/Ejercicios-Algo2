#include "sensor.h"
#include "alarma.h"
#include <iostream>

using namespace std;

int main(){

	Alarma alarma(8899);
	alarma.encender();
	bool fue_activada = alarma.activada();
	cout << "La alarma fue activada?: " << fue_activada << endl;

	return 0;
}
