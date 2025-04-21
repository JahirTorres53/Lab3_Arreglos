#include <iostream>
using namespace std;

const int TAM = 10;

void ingresarDatos(int arr[]) {
    cout << "Ingrese 10 números enteros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Número [" << i << "]: ";
        cin >> arr[i];
    }
}

int calcularSuma(int arr[]) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += arr[i];
    }
    return suma;
}

int encontrarMaximo(int arr[]) {
    int max = arr[0];
    for (int i = 1; i < TAM; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int encontrarMinimo(int arr[]) {
    int min = arr[0];
    for (int i = 1; i < TAM; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

void contarParesImpares(int arr[], int& pares, int& impares) {
    pares = 0;
    impares = 0;
    for (int i = 0; i < TAM; i++) {
        if (arr[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
}

int main() {
    int numeros[TAM];
    int suma, maximo, minimo, pares, impares;

    ingresarDatos(numeros);
    suma = calcularSuma(numeros);
    maximo = encontrarMaximo(numeros);
    minimo = encontrarMinimo(numeros);
    contarParesImpares(numeros, pares, impares);

    cout << "\nResultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << suma / (double)TAM << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    return 0;
}
