/*
Escreva um programa que leia duas matrizes inteiras A e B, ambas de ordem m x n,
e que utilize uma função para realizar a operação A + B.
A matriz resultante da operação deve ser exibida na própria função.
*/

#include <stdio.h>

void somaMatrizes(int m, int n, int (*A)[n], int (*B)[n]);

int main(void) {

    int m, n, i, j;

    scanf("%d%d", &m, &n);

    int A[m][n], B[m][n];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    somaMatrizes(m, n, A, B);

    return 0;

}

void somaMatrizes(int m, int n, int (*A)[n], int (*B)[n]) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n - 1; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("%d\n", A[i][j] + B[i][j]);
    }
}