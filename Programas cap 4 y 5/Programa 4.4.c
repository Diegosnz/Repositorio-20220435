#include <stdio.h>

/* Prueba de variables globales, locales y estáticas.
El programa utiliza funciones en las que se usan diferentes tipos de
variables. */

int f1(void);
int f2(void);
int f3(void); /* Prototipos de funciones. */
int f4(void);

int K = 3; /* Variable global. */

int main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la funcion f1 es: %d", f1());
        printf("\nEl resultado de la funcion f2 es: %d", f2());
        printf("\nEl resultado de la funcion f3 es: %d", f3());
        printf("\nEl resultado de la funcion f4 es: %d", f4());
    }

    return 0;
}

int f1(void)
/* La función f1 utiliza la variable global. */
{
    K += K;
    return K;
}

int f2(void)
/* La función f2 utiliza la variable local. */
{
    int local = 1;
    local++;
    return local;
}

int f3(void)
/* La función f3 utiliza la variable estática. */
{
    static int K_static = 8;
    K_static += 2;
    return K_static;
}

int f4(void)
/* La función f4 utiliza dos variables con el mismo nombre: local y global. */
{
    int local = 5;
    local = local + K; /* Uso de la variable local (local) y global (K) */
    return local;
}
