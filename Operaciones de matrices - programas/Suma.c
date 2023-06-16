/*Incluye la biblioteca de entrada y salida est�ndar que
proporciona funciones para leer y escribir datos en la consola.*/

#include <stdio.h>
const int MAX = 50;/*Declara una constante llamada MAX con un valor de 50,
                    que representa el tama�o m�ximo de las matrices.*/

void Lectura(int [][MAX], int, int);/*Prototipo de la funci�n Lectura que
                                    se encargar� de leer los elementos de una matriz.*/

void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);/*Prototipo de la funci�n Suma que realizar� la
                                                            suma de dos matrices y almacenar� el resultado

                                                            en una tercera matriz.*/
void Imprime(int [][MAX], int, int);/*Prototipo de la funci�n Imprime que imprimir� los elementos de una matriz.*/

void main(void)/*Definici�n de la funci�n principal main.*/
{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];/*Declaraci�n de tres matrices MA, MB y MC de tama�o MAX x MAX.*/
    int FIL, COL; /*Declaraci�n de las variables FIL y COL que almacenar�n el n�mero de filas y columnas de
                    las matrices, respectivamente.*/

    do
    {
        printf("Ingrese el numero de filas de los arreglos: "); /*Se solicita al usuario que ingrese el n�mero
                                                                de filas de las matrices FIL y se verifica que est�
                                                                en el rango permitido utilizando un bucle do-while.*/
        scanf("%d", &FIL);
    } while (FIL > MAX || FIL < 1);

   /*Se solicita al usuario que ingrese el n�mero de columnas de las matrices
   COL y se verifica que est� en el rango permitido utilizando un bucle do-while.*/
    do
    {
        printf("Ingrese el numero de columnas de los arreglos: ");
        scanf("%d", &COL);
    } while (COL > MAX || COL < 1);
/* Imprime un mensaje indicando que se realizar� la lectura de la matriz MA.*/
    printf("\nLectura del Arreglo MA\n");
    /*Llama a la funci�n Lectura pasando como argumentos la matriz MA, el n�mer
    o de filas FIL y el n�mero de columnas COL para leer los elementos de la matriz MA.*/
    Lectura(MA, FIL, COL);
/*Imprime un mensaje indicando que se realizar� la lectura de la matriz MB.*/
    printf("\nLectura del Arreglo MB\n");
    /* Llama a la funci�n Lectura pasando como argumentos la matriz MB, el n�mero de filas
    FIL y el n�mero de columnas COL para leer los elementos de la matriz MB.*/
    Lectura(MB, FIL, COL);
/*Llama a la funci�n Suma pasando como argumentos las matrices MA, MB y MC, y los
n�meros de filas y columnas FIL y COL para calcular la suma de las matrices MA y MB
 y almacenar el resultado en la matriz MC.*/
    Suma(MA, MB, MC, FIL, COL);
/*Imprime un mensaje indicando que se imprimir� la matriz MC.*/
    printf("\nImpresion del Arreglo MC\n");
    /*Llama a la funci�n Imprime pasando como argumentos la matriz MC, el n�mero de filas
     FIL y el n�mero de columnas COL para imprimir los elementos de la matriz MC.*/
    Imprime(MC, FIL, COL);
}

void Lectura(int A[][MAX], int F, int C)
/*Implementaci�n de la funci�n Lectura que se encarga de leer los elementos de una matriz.
-Esta funci�n se encarga de leer los elementos de un arreglo bidimensional A de tama�o F filas por C columnas.
-Utiliza dos bucles anidados para recorrer cada posici�n del arreglo.
-En cada posici�n, solicita al usuario que ingrese el valor del elemento correspondiente y lo almacena en A[I][J].*/
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
/*Implementaci�n de la funci�n Suma que realiza la suma de dos matrices y almacena
el resultado en una tercera matriz.
-Esta funci�n realiza la suma de dos arreglos bidimensionales M1 y M2 y guarda el resultado en el arreglo M3.
-Recorre los arreglos M1 y M2 utilizando dos bucles anidados.
-En cada posici�n (I, J), suma los elementos correspondientes de M1 y M2 y almacena el resultado en M3[I][J].
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
/*Implementaci�n de la funci�n Imprime que imprime los elementos de una matriz.
/Esta funci�n se encarga de imprimir los elementos de un arreglo bidimensional A de tama�o F filas por C columnas.
-Utiliza dos bucles anidados para recorrer cada posici�n del arreglo.
-En cada posici�n, imprime el valor del elemento correspondiente utilizando printf.
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
