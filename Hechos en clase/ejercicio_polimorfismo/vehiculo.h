#ifndef VEHICULO_H_
#define VEHICULO_H_

class Vehiculo
{

protected:

	float kilometraje;
	float combustible;
	float precio_base;
	float cilindrada;

public:

	Vehiculo(float cilindrada, float combustible, float kilometraje);

	~Vehiculo(){};
	virtual float valor_mercado() = 0;

	float coeficiente_impositivo();

};

#endif /* VEHICULO_H_ */
