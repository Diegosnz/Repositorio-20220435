#include <stdio.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros números naturales con la
 ayuda de una función y utilizando parámetros por valor.

int cubo(int); /* Prototipo de función. El parámetro es de tipo entero. */

void main(void)
{
    int I;

    for (I = 1; I <= 10; I++)
    {
        printf("\nEl cubo de %d es: %d", I, cubo(I));
    }
}

int cubo(int K) /* K es un parámetro por valor de tipo entero. */
{
    return (K * K * K);
}
