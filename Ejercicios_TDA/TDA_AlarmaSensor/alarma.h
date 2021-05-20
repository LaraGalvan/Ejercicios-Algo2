#ifndef ALARMA_H_
#define ALARMA_H_

#include "sensor.h"

class Alarma{
private:
	Sensor sensor_movimiento;
	Sensor sensor_contacto;
	Sensor sensor_sonido;
	int codigo;
	bool prendida;

public:
	//PRE: la variable es un entero positivo
	//POST: la alarma se apaga con el codigo de seguridad ingresado
	Alarma(int codigo_seguridad);

	//POST: enciende la alarma
	void encender();

	//POST: si la variable es correcta se apaga la alarma
	void apagar(int codigo_seguridad);

	//POST: Devuelve true si alguno de los sensores esta activado
	bool activada();
};

#endif /* ALARMA_H_ */
