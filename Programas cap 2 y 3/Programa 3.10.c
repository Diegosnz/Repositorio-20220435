#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
números pares y calcula el promedio de los impares.
I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    printf("Ingrese el numero de datos que se van a procesar: ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            printf("\nIngrese el numero %d: ", I);
            scanf("%d", &NUM);

            if (NUM % 2 == 0)
            {
                SPA = SPA + NUM; // Suma de números pares
            }
            else
            {
                SIM = SIM + NUM; // Suma de números impares
                CIM++; // Contador de números impares
            }
        }

        printf("\nLa suma de los numeros pares es: %d", SPA);

        if (CIM > 0)
        {
            float promedioImpares = (float)SIM / CIM; // Promedio de números impares
            printf("\nEl promedio de numeros impares es: %5.2f", promedioImpares);
        }
        else
        {
            printf("\nNo se ingresaron numeros impares");
        }
    }
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}
