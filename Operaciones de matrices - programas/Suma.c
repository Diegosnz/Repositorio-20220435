/*Incluye la biblioteca de entrada y salida estándar que
proporciona funciones para leer y escribir datos en la consola.*/

#include <stdio.h>
const int MAX = 50;/*Declara una constante llamada MAX con un valor de 50,
                    que representa el tamaño máximo de las matrices.*/

void Lectura(int [][MAX], int, int);/*Prototipo de la función Lectura que
                                    se encargará de leer los elementos de una matriz.*/

void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);/*Prototipo de la función Suma que realizará la
                                                            suma de dos matrices y almacenará el resultado

                                                            en una tercera matriz.*/
void Imprime(int [][MAX], int, int);/*Prototipo de la función Imprime que imprimirá los elementos de una matriz.*/

void main(void)/*Definición de la función principal main.*/
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];/*Declaración de tres matrices MA, MB y MC de tamaño MAX x MAX.*/
    int FIL, COL; /*Declaración de las variables FIL y COL que almacenarán el número de filas y columnas de
                    las matrices, respectivamente.*/

    do
    {
        printf("Ingrese el numero de filas de los arreglos: "); /*Se solicita al usuario que ingrese el número
                                                                de filas de las matrices FIL y se verifica que esté
                                                                en el rango permitido utilizando un bucle do-while.*/
        scanf("%d", &FIL);
    } while (FIL > MAX || FIL < 1);

   /*Se solicita al usuario que ingrese el número de columnas de las matrices
   COL y se verifica que esté en el rango permitido utilizando un bucle do-while.*/
    do
    {
        printf("Ingrese el numero de columnas de los arreglos: ");
        scanf("%d", &COL);
    } while (COL > MAX || COL < 1);
/* Imprime un mensaje indicando que se realizará la lectura de la matriz MA.*/
    printf("\nLectura del Arreglo MA\n");
    /*Llama a la función Lectura pasando como argumentos la matriz MA, el númer
    o de filas FIL y el número de columnas COL para leer los elementos de la matriz MA.*/
    Lectura(MA, FIL, COL);
/*Imprime un mensaje indicando que se realizará la lectura de la matriz MB.*/
    printf("\nLectura del Arreglo MB\n");
    /* Llama a la función Lectura pasando como argumentos la matriz MB, el número de filas
    FIL y el número de columnas COL para leer los elementos de la matriz MB.*/
    Lectura(MB, FIL, COL);
/*Llama a la función Suma pasando como argumentos las matrices MA, MB y MC, y los
números de filas y columnas FIL y COL para calcular la suma de las matrices MA y MB
 y almacenar el resultado en la matriz MC.*/
    Suma(MA, MB, MC, FIL, COL);
/*Imprime un mensaje indicando que se imprimirá la matriz MC.*/
    printf("\nImpresion del Arreglo MC\n");
    /*Llama a la función Imprime pasando como argumentos la matriz MC, el número de filas
     FIL y el número de columnas COL para imprimir los elementos de la matriz MC.*/
    Imprime(MC, FIL, COL);
}

void Lectura(int A[][MAX], int F, int C)
/*Implementación de la función Lectura que se encarga de leer los elementos de una matriz.
-Esta función se encarga de leer los elementos de un arreglo bidimensional A de tamaño F filas por C columnas.
-Utiliza dos bucles anidados para recorrer cada posición del arreglo.
-En cada posición, solicita al usuario que ingrese el valor del elemento correspondiente y lo almacena en A[I][J].*/
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
    }
}
/*Implementación de la función Suma que realiza la suma de dos matrices y almacena
el resultado en una tercera matriz.
-Esta función realiza la suma de dos arreglos bidimensionales M1 y M2 y guarda el resultado en el arreglo M3.
-Recorre los arreglos M1 y M2 utilizando dos bucles anidados.
-En cada posición (I, J), suma los elementos correspondientes de M1 y M2 y almacena el resultado en M3[I][J].
*/
void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            M3[I][J] = M1[I][J] + M2[I][J];
        }
    }
}
/*Implementación de la función Imprime que imprime los elementos de una matriz.
/Esta función se encarga de imprimir los elementos de un arreglo bidimensional A de tamaño F filas por C columnas.
-Utiliza dos bucles anidados para recorrer cada posición del arreglo.
-En cada posición, imprime el valor del elemento correspondiente utilizando printf.
*/
void Imprime(int A[][MAX], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("\nElemento %d %d: %d", I, J, A[I][J]);
        }
    }
}
