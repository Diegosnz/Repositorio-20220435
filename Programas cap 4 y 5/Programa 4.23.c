#include <stdio.h>

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}
/* Ambas funciones no tienen una funci�n main para ejecutarlas
ni ning�n c�digo de impresi�n, por lo que no hay ninguna salida
esperada.*/
