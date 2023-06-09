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
/* Ambas funciones no tienen una función main para ejecutarlas
ni ningún código de impresión, por lo que no hay ninguna salida
esperada.*/
