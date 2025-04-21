#include <iostream>
using namespace std;

void imprimirInverso(int* arr, int tam) {
    for (int i = tam  - 1; i >= 0; i--) {
        cout << *(arr + i) << " ";  // Accede a los elementos usando punteros
    }
    cout << endl;
}

int main() {
    int arreglo[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9,10 };

    // Llamamos a la función para imprimir en orden inverso
    cout << "Arreglo en orden inverso: ";
    imprimirInverso(arreglo, 10);

    return 0;
}