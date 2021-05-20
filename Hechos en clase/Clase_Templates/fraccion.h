#ifndef FRACCION_H_
#define FRACCION_H_

class Fraccion {

private: //Atributos
    int numerador;
    int denominador;

public: //Metodos

    //constructor con parametros
    //POST: se le asigna a los atributos los valores de las variables
    Fraccion(int numerador, int denominador);

    //POST: Se muestra por pantalla la fraccion
    void mostrar();

    //POST: Realiza la suma entre las fracciones
    Fraccion operator + (Fraccion f);

    //POST: Realiza la resta entre las fracciones
    Fraccion operator - (Fraccion f);

    //POST: Realiza la multiplicacion entre las fracciones
    Fraccion operator * (Fraccion f);

    //Realiza la division entre las fracciones
    Fraccion operator / (Fraccion f);
};

#endif /* FRACCION_H_ */
