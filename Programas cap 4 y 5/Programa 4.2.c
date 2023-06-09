#include <stdio.h>

int cubo(void); /* Prototipo de funci�n. */
int I; /* Variable global. */

int main(void)
{
    int CUB;

    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); /* Llamada a la funci�n cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }

    return 0;
}

int cubo(void) /* Declaraci�n de la funci�n. */
{
    int I = 2; /* Variable local entera I con el mismo nombre que la variable global. */
    return (I * I * I);
}
/*La variable local I tiene prioridad sobre la variable global que tiene el mismo
nombre y por esta raz�n siempre calcula el cubo del n�mero entero 2.*/
