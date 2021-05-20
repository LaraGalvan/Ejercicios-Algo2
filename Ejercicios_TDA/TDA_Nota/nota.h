#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED

class Nota{

private:
	int nota;

public:
	//Metodos

	//PRE: la variable esta comprendida entre 1 y 10
	//POST: inicializa la Nota con el valor indicado
	Nota(int valor_inicial);

	//PRE: -
	//POST: devuelve el valor numerico de la Nota
	int obtener_valor();

	//POST: indica si la Nota permite o no la aprobación
	bool aprobado();

	//POST: indica si la Nota implica la desaprobación
	bool desaprobado();

	//PRE: la variable esta comprendida entre 1 y 10
	//POST: modifica el valor numerico de la nota, cambiandolo por nuevo_valor SOLO si nuevo_valor es superior al valor actual
	void recuperar(int nuevo_valor);

};


#endif /* NOTA_H_ */
