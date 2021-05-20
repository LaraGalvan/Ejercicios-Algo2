#ifndef CAMIONETA_H_
#define CAMIONETA_H_

#include "vehiculo.h"

class Camioneta : public Vehiculo{

public:
	Camioneta(float cilindrada, float combustible, float kilometraje);
	~Camioneta(){};

	float valor_mercado();
};


#endif /* CAMIONETA_H_ */
