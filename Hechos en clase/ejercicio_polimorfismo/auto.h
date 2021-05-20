#ifndef AUTO_H_
#define AUTO_H_

#include "vehiculo.h"

class Auto: public Vehiculo
{

public:
	Auto(float cilindrada, float combustible, float kilometraje);
	~Auto(){};
	float valor_mercado();
};


#endif /* AUTO_H_ */
