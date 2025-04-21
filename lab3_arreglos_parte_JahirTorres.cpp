#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
		int arreglo[SIZE];

		//llamar el arreglo con numeros del 1 al 10
		for (int i = 0; i < SIZE; i++) {
			arreglo[i] = i + 1;
		}

		//impreme cada valor con su indice 
		for (int i = 0; i < SIZE; i++) {
			cout << "Indice [" << i << "] = " << arreglo[i] << endl;
		}
		return 0;
}