#include <stdio.h>
#include <string.h>

/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, así
como la forma de acceso a los campos de las variables o apuntadores de tipo
estructura, tanto para lectura como para escritura. Se utiliza además una
función que recibe como parámetro un apuntador de tipo estructura. */

typedef struct {
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado {
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado *a) {
    printf("\nIngrese el nombre del empleado: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);
    strtok(a->nombre, "\n");

    printf("Ingrese el departamento de la empresa: ");
    fgets(a->departamento, sizeof(a->departamento), stdin);
    strtok(a->departamento, "\n");

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);

    printf("---- Ingrese la direccinn del empleado ----\n");
    printf("Calle: ");
    fgets(a->direccion.calle, sizeof(a->direccion.calle), stdin);
    strtok(a->direccion.calle, "\n");

    printf("Numero: ");
    scanf("%d", &a->direccion.numero);
    fflush(stdin);

    printf("Codigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);

    printf("Localidad: ");
    fgets(a->direccion.localidad, sizeof(a->direccion.localidad), stdin);
    strtok(a->direccion.localidad, "\n");
}

int main(void) {
    struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jerónimo", 120, 3490, "Toluca"}};
    struct empleado *e1, *e2, e3, e4;

    e1 = malloc(sizeof(struct empleado));
    printf("\nIngrese el nombre del empleado 1: ");
    fgets(e1->nombre, sizeof(e1->nombre), stdin);
    strtok(e1->nombre, "\n");

    printf("Ingrese el departamento de la empresa: ");
    fgets(e1->departamento, sizeof(e1->departamento), stdin);
    strtok(e1->departamento, "\n");

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    fflush(stdin);

    printf("---- Ingrese la direccion del empleado ----\n");
    printf("Calle: ");
    fgets(e1->direccion.calle, sizeof(e1->direccion.calle), stdin);
    strtok(e1->direccion.calle, "\n");

    printf("Numero: ");
    scanf("%d", &e1->direccion.numero);
    fflush(stdin);

    printf("Codigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    fflush(stdin);

    printf("Localidad: ");
    fgets(e1->direccion.localidad, sizeof(e1->direccion.localidad), stdin);
    strtok(e1->direccion.localidad, "\n");

    printf("\nIngrese el nombre del empleado 3: ");
    fgets(e3.nombre, sizeof(e3.nombre), stdin);
    strtok(e3.nombre, "\n");

    printf("Ingrese el departamento de la empresa: ");
    fgets(e3.departamento, sizeof(e3.departamento), stdin);
    strtok(e3.departamento, "\n");

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    fflush(stdin);

    printf("---- Ingrese la direccion del empleado ----\n");
    printf("Calle: ");
    fgets(e3.direccion.calle, sizeof(e3.direccion.calle), stdin);
    strtok(e3.direccion.calle, "\n");

    printf("Numero: ");
    scanf("%d", &e3.direccion.numero);
    fflush(stdin);

    printf("Codigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    fflush(stdin);

    printf("Localidad: ");
    fgets(e3.direccion.localidad, sizeof(e3.direccion.localidad), stdin);
    strtok(e3.direccion.localidad, "\n");

    e2 = malloc(sizeof(struct empleado));
    Lectura(e2);
    Lectura(&e4);

    printf("\nDatos del empleado 1:\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e1->nombre, e1->departamento,
           e1->sueldo, e1->direccion.calle, e1->direccion.numero,
           e1->direccion.cp, e1->direccion.localidad);

    printf("\nDatos del empleado 4:\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s\n", e4.nombre, e4.departamento,
           e4.sueldo, e4.direccion.calle, e4.direccion.numero,
           e4.direccion.cp, e4.direccion.localidad);

    free(e1);
    free(e2);

    return 0;
}
