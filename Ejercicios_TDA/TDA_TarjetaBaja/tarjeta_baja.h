#ifndef TARJETA_BAJA_H_
#define TARJETA_BAJA_H_

class TarjetaBaja{
private:
	double saldo;
	int cant_viajes_colectivo;
	int cant_viajes_subte;

public:
	//Metodos

	//PRE: la variable saldo_inicial es positivo
	//POST: saldo de la tarjeta en la variable saldo_inicial
	TarjetaBaja(double saldo_inicial);

	double obtener_saldo();

	//PRE: monto es positivo
	//POST: agrega el monto al saldo de la tarjeta
	void cargar(double monto);

	//PRE: saldo  suficiente , seccion  es 1, 2 o 3.
	//POST: utiliza  del  saldo $12 , $13 o $13 .75  segun  la  seccion para un viaje  en  colectivo.
	void pagar_viaje_colectivo(int seccion);

	//PRE: saldo suficiente
	//POST: utiliza 12.50 del saldo para un viaje en subte
	void pagar_viaje_subte();

	//POST: devuelve la cantidad total de viajes realizados
	int contar_viajes();

	//POST: devuelve la cantidad total de viajes en colectivo
	int contar_viajes_colectivo();

	//POST: devuelve la cantidad de viajes en subte realizados
	int contar_viajes_subte();

};

#endif /* TARJETA_BAJA_H_ */
