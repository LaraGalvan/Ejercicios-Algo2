#ifndef CAMION_H_
#define CAMION_H_

#include "vehiculo.h"

class Camion: public Vehiculo
{

public:
	Camion(float cilindrada, float combustible, float kilometraje);
	~Camion();
	float valor_mercado();

};


#endif /* CAMION_H_ */
