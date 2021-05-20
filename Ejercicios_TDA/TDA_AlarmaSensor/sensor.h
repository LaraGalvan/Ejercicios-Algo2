#ifndef SENSOR_H_
#define SENSOR_H_

class Sensor{
private:
	bool activo;
	bool prendido;

public:
	//POST: sensor apagado
	Sensor();

	//POST:enciende el sensor
	void encender();

	//POST: apaga el sensor
	void apagar();

	//POST: devuelve true si el sensor ha sido activado, false en caso contrario
	bool activado();

	//POST: activa el sensor
	void activar();
};

#endif /* SENSOR_H_ */
