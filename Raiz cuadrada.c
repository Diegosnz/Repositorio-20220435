#include <stdio.h>
#include <stdlib.h>



int main()
{
    double x = 0;
    double b = 0;



    printf("Calculo de raiz cuadrada\n");
    printf("\nIntroduce el numero: ");
    scanf("%lf",&x);
    b = x;

    unsigned int cnt = 0;

    while(!(b == (x/b)))
    {

        b = 0.5* ((x/b)+b);
        cnt++;
        printf("\nvalor de iteracion: %d", cnt);

        printf("\nRaiz cuadrada de %lf es: %lf",x,b);
    }



    return 0;
}
