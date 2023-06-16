#include <stdio.h>
#include <stdlib.h>

#define MAX_DIM 50

void multiplicarMatrices(float[][MAX_DIM], float[][MAX_DIM], float[][MAX_DIM], int, int, int);
void imprimirMatriz(float[][MAX_DIM], int);

int main() {
    float matrizA[MAX_DIM][MAX_DIM];
    float matrizB[MAX_DIM][MAX_DIM];
    float matrizBInversa[MAX_DIM][MAX_DIM];
    float matrizResultado[MAX_DIM][MAX_DIM];
    int dimension;

    printf("Ingrese la dimension de las matrices: ");
    scanf("%d", &dimension);

    printf("\nIngrese los elementos de la matriz A:\n");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("\nIngrese los elementos de la matriz B:\n");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%f", &matrizB[i][j]);
        }
    }

    // Calcular la inversa de la matriz B
    float determinante = 0;
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (i == j)
                matrizBInversa[i][j] = 1.0;
            else
                matrizBInversa[i][j] = 0.0;
        }
    }

    for (int k = 0; k < dimension; k++) {
        determinante = matrizB[k][k];

        for (int j = 0; j < dimension; j++) {
            matrizB[k][j] /= determinante;
            matrizBInversa[k][j] /= determinante;
        }

        for (int i = 0; i < dimension; i++) {
            if (i != k) {
                float factor = matrizB[i][k];

                for (int j = 0; j < dimension; j++) {
                    matrizB[i][j] -= matrizB[k][j] * factor;
                    matrizBInversa[i][j] -= matrizBInversa[k][j] * factor;
                }
            }
        }
    }

    // Multiplicar la matriz A por la matriz B inversa
    multiplicarMatrices(matrizA, matrizBInversa, matrizResultado, dimension, dimension, dimension);

    printf("\nEl resultado de la multiplicacion de la matriz A por la matriz B (inversa de B) es:\n");
    imprimirMatriz(matrizResultado, dimension);

    return 0;
}

void multiplicarMatrices(float matrizA[][MAX_DIM], float matrizB[][MAX_DIM], float matrizResultado[][MAX_DIM], int filasA, int columnasA, int columnasB) {
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void imprimirMatriz(float matriz[][MAX_DIM], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
