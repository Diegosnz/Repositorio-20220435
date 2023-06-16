#include <stdio.h>

#define MAX_FIL 50  /*Define constantes MAX_FIL y MAX_COL con un valor de 50, que representan el número máximo de filas y columnas de las matrices.*/
#define MAX_COL 50
/*void multiplicarMatrices(int[][MAX_COL], int[][MAX_COL], int[][MAX_COL], int, int, int);: Declaración de una función llamada multiplicarMatrices que
toma tres matrices de enteros, y tres enteros que representan las dimensiones de las matrices.*/
void multiplicarMatrices(int[][MAX_COL], int[][MAX_COL], int[][MAX_COL], int, int, int);

int main(void)
{
    int matrizA[MAX_FIL][MAX_COL];/*Declaración de una matriz matrizA de tamaño MAX_FIL por MAX_COL para almacenar la matriz A.*/
    int matrizB[MAX_FIL][MAX_COL];/*Declaración de una matriz matrizB de tamaño MAX_FIL por MAX_COL para almacenar la matriz B.*/
    int matrizResultado[MAX_FIL][MAX_COL];/*Declaración de una matriz matrizResultado de tamaño MAX_FIL por MAX_COL para almacenar
                                            el resultado de la multiplicación de las matrices A y B.*/

    /*Declaración de enteros filasA, columnasA y columnasB para almacenar las dimensiones de las matrices ingresadas por el usuario.*/
    int filasA, columnasA, columnasB;
/* Imprime en pantalla una solicitud para ingresar el número de filas de la matriz A.*/
    printf("Ingrese el numero de filas de la matriz A: ");
    /*/*Lee el número de filas de la matriz A ingresado por el usuario y lo almacena en la variable filasA.*/
    scanf("%d", &filasA);
    /*Imprime en pantalla una solicitud para ingresar el número de columnas de la matriz A.*/
    printf("Ingrese el numero de columnas de la matriz A: ");
    /*Lee el número de columnas de la matriz A ingresado por el usuario y lo almacena en la variable columnasA.*/
    scanf("%d", &columnasA);
/* Imprime en pantalla una solicitud para ingresar el número de columnas de la matriz A.*/
    printf("Ingrese el numero de columnas de la matriz B: ");
    /* Lee el número de columnas de la matriz B ingresado por el usuario y lo almacena en la variable columnasB.*/
    scanf("%d", &columnasB);
/* Imprime en pantalla una solicitud para ingresar los elementos de la matriz A.*/
    printf("\nIngrese los elementos de la matriz A:\n");

    /*Inicia un bucle for para iterar a través de las filas de la matriz A.*/
    for (int i = 0; i < filasA; i++) {
       /*Inicia un bucle for anidado para iterar a través de las columnas de la matriz A.*/
        for (int j = 0; j < columnasA; j++) {
            /* Imprime en pantalla una solicitud para ingresar el elemento en la posición [i][j] de la matriz A.*/
            printf("Ingrese el elemento [%d][%d]: ", i, j);
           /* Lee el elemento ingresado por el usuario y lo almacena en la posición [i][j] de la matriz A.*/
            scanf("%d", &matrizA[i][j]);
        }
    }
/* Imprime en pantalla una solicitud para ingresar los elementos de la matriz B.*/
    printf("\nIngrese los elementos de la matriz B:\n");
    /* Inicia un bucle for para iterar a través de las filas de la matriz B.*/
    for (int i = 0; i < columnasA; i++) {
       /*: Inicia un bucle for anidado para iterar a través de las columnas de la matriz B.*/
        for (int j = 0; j < columnasB; j++) {
          /*Imprime en pantalla una solicitud para ingresar el elemento en la posición [i][j] de la matriz B.*/
            printf("Ingrese el elemento [%d][%d]: ", i, j);
           /* Lee el elemento ingresado por el usuario y lo almacena en la posición [i][j] de la matriz B.*/
            scanf("%d", &matrizB[i][j]);
        }
    }
/* Llama a la función multiplicarMatrices con las matrices ingresadas por el usuario y sus dimensiones como argumentos.*/
    multiplicarMatrices(matrizA, matrizB, matrizResultado, filasA, columnasA, columnasB);
/*Imprime en pantalla una etiqueta para mostrar el resultado de la multiplicación.*/
    printf("\nResultado de la multiplicacion:\n");
    /*Inicia un bucle for para iterar a través de las filas de la matriz resultado.*/
    for (int i = 0; i < filasA; i++) {
        /*Inicia un bucle for anidado para iterar a través de las columnas de la matriz resultado.*/
        for (int j = 0; j < columnasB; j++) {
           /*Imprime en pantalla el elemento en la posición [i][j] de la matriz resultado.*/
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*Define la función multiplicarMatrices que toma tres matrices, matrizA, matrizB y matrizResultado, junto con las dimensiones de las matrices.*/
void multiplicarMatrices(int matrizA[][MAX_COL], int matrizB[][MAX_COL], int matrizResultado[][MAX_COL], int filasA, int columnasA, int columnasB)
{
    /*Se inicia un bucle for externo para recorrer las filas de la matriz resultado matrizResultado. La variable i representa el índice de la fila actual.*/
    for (int i = 0; i < filasA; i++) {
       /*Dentro del bucle externo, se inicia un bucle for interno para recorrer las columnas de la matriz resultado. La variable j representa el índice de la columna actual.*/
        for (int j = 0; j < columnasB; j++) {
          /*Antes de realizar la multiplicación de elementos, se asigna el valor 0 a matrizResultado[i][j]. Esto es necesario para asegurarse de que el valor acumulado en la multiplicación se inicialice correctamente.*/
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}
