#ifndef OPERACIONES_H_
#define OPERACIONES_H_

template < typename Tipo >

class Operaciones{

public:
	//PRE: la funcion debe recibir 2 numeros de cualquier tipo
	//POST: la funcion devuelve la suma entre los 2 numeros
    Tipo sumar(Tipo numero1, Tipo numero2);

    //PRE: la funcion debe recibir 2 numeros de cualquier tipo
    //POST: la funcion devuelve la resta entre los 2 numeros
    Tipo restar(Tipo numero1, Tipo numero2);

    //PRE: la funcion debe recibir 2 numeros de cualquier tipo
    //POST: la funcion devuelve la division entre los 2 numeros
    Tipo dividir(Tipo numero1, Tipo numero2);

    //PRE: la funcion debe recibir 2 numeros de cualquier tipo
    //POST: la funcion devuelve la multiplicacion entre los 2 numeros
    Tipo multiplicar(Tipo numero1, Tipo numero2);

};

template < typename Tipo >
Tipo Operaciones <Tipo>::sumar(Tipo numero1, Tipo numero2){
	return (numero1+numero2);
}

template < typename Tipo >
Tipo Operaciones <Tipo>::restar(Tipo numero1, Tipo numero2){
	return (numero1-numero2);
}

template <typename Tipo>
Tipo Operaciones <Tipo>::dividir(Tipo numero1, Tipo numero2){

	return (numero1/numero2);
}

template < typename Tipo >
Tipo Operaciones <Tipo>::multiplicar(Tipo numero1, Tipo numero2){
	return (numero1*numero2);
}

#endif /* OPERACIONES_H_ */
