#include <iostream>
#include <fstream>
#include <string>

const int MAX = 10;

/*
 * CLASE 15/04/21
 * ENUNCIADO: Realice un programa para leer datos de estudiantes de un archivo. Cada estudiante tiene
 * un padron, apellido y nombre.
 *Luego debe imprimir la lista de estudiantes sin ordenar y ordenada por padron
 */

using namespace std;

typedef struct alumno{
	int padron;
	string nombre;
	string apellido;
}alumno_t;

void ordenar_por_padron(alumno_t alumnos[], int longitud){
	alumno_t auxiliar = alumnos[0];
	for(int i = 0; i < longitud; i++){
		for(int j = 0; j < longitud-i-1; j++){
			if(alumnos[j].padron < alumnos[j+1].padron){
				auxiliar = alumnos[j];
				alumnos[j] = alumnos[j+1];
				alumnos[j+1] = auxiliar;
			}
		}
	}
}

int main(){

	alumno_t alumnos[MAX];
	int contador = 0;

	ifstream archivo;
	archivo.open("datos.txt");

	if(!archivo){
		cout << "No se pudo abrir el archivo!" << endl;
	}

	while(archivo >> alumnos[contador].padron){

		archivo >> alumnos[contador].nombre;
		archivo >> alumnos[contador].apellido;
		contador++;
	}

	ordenar_por_padron(alumnos, contador);

	for(int i = 0; i < contador; i++){
		cout << alumnos[i].nombre << " ";
		cout << alumnos[i].apellido << " ";
		cout << alumnos[i].padron << endl;
	}

	archivo.close();

	return 0;
}
