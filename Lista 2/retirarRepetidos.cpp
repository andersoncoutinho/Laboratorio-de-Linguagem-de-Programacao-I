/*
Implemente um programa que recebe o tamanho N de um vetor A
e depois recebe N números inteiros maiores que zero e os armazena no vetor A.
Considere que o usuário digitará sempre valores maiores que zero.
O programa deve remover os números repetidos trocando-os por zero.
Depois o programa deve imprimir os elementos do vetor sem imprimir os com valor igual a zero.
*/

#include <iostream>

using namespace std;

int main(void) {

    int n, valor;

    cin >> n;

    int valores[n];

    for(int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(valores[i] == valores[j]) {
                valores[j] = 0;
            }
        }
    }
    for(int i = 0; i < n-1; i++) {
        if(valores[i] != 0) {
            cout << valores[i] << ' ';
        }
    }

    if(valores[n-1] != 0) {
        cout << valores[n-1] << endl;
    }
    return 0;
}