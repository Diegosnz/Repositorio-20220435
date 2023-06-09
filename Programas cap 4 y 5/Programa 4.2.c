#include <stdio.h>

int cubo(void); /* Prototipo de función. */
int I; /* Variable global. */

int main(void)
{
    int CUB;

    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); /* Llamada a la función cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }

    return 0;
}

int cubo(void) /* Declaración de la función. */
{
    int I = 2; /* Variable local entera I con el mismo nombre que la variable global. */
    return (I * I * I);
}
/*La variable local I tiene prioridad sobre la variable global que tiene el mismo
nombre y por esta razón siempre calcula el cubo del número entero 2.*/
