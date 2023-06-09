#include <stdio.h>

void f1(void); /* Prototipo de funcion. */
int K = 5; /* Variable global. */

void main(void)
{
    int I;

    for (I = 1; I <= 3; I++)
    {
        f1();
    }
}

void f1(void)
{
    int local = 2; /* Variable local. */

    local += local;
    printf("\n\nEl valor de la variable local es: %d", local);
    K = K + local; /* Uso de ambas variables. */
    printf("\nEl valor de la variable global es: %d", K);
}
