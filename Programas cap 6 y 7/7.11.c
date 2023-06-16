#include <stdio.h>
#include <ctype.h>

void main(void)
{
    char p, cad[51];
    int n;

    printf("Ingrese la cadena de caracteres (maximo 50): ");
    fgets(cad, sizeof(cad), stdin);

    printf("Ingrese la posicinn en la cadena que desea verificar: ");
    scanf("%d", &n);

    if (n >= 1 && n <= strlen(cad))
    {
        p = cad[n - 1];

        if (islower(p))
            printf("%c es una letra minuscula\n", p);
        else
            printf("%c no es una letra minuscula\n", p);
    }
    else
    {
        printf("El valor ingresado de n es incorrecto\n");
    }
}
