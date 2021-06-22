#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
    Lista nueva_lista;
    nueva_lista.alta(6, 1);
    nueva_lista.alta(3, 2);
    nueva_lista.alta(4, 3);
    nueva_lista.alta(2, 4);
    nueva_lista.alta(5, 5);

    cout << "ANTES: " << endl;

    nueva_lista.mostrar();
    //l.insertarProductos();
    //nueva_lista.separarContiguosDivisibles();

    nueva_lista.eliminarYRetornarImpares();

    cout << "\n";
    cout << "................................." << endl;
    cout << "DESPUES: " << endl;
    nueva_lista.mostrar();

    return 0;
}

