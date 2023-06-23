#include <stdio.h>
#include <string.h>

/* Uniones.
El programa muestra la manera como se declara una unión, así como la forma de
➥acceso a los campos de las variables de tipo unión tanto para asignación
➥de valores como para lectura y escritura. */
union datos {
    char celular[15];
    char correo[20];
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

int main(void) {
    alumno a1 = {120, "Maria", "Contabilidad", 8.9, {"5-158-40-50"}};
    alumno a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matricula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    scanf("%s", a2.nombre);

    printf("Ingrese la carrera: ");
    scanf("%s", a2.carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese el correo electronico: ");
    scanf("%s", a2.personales.correo);

    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

    return 0;
}

void Lectura(alumno *a) {
    printf("Ingrese la matricula: ");
    scanf("%d", &(a->matricula));
    fflush(stdin);

    printf("Ingrese el nombre: ");
    scanf("%s", a->nombre);

    printf("Ingrese la carrera: ");
    scanf("%s", a->carrera);

    printf("Ingrese el promedio: ");
    scanf("%f", &(a->promedio));

    printf("Ingrese el telefono celular: ");
    scanf("%s", a->personales.celular);
}
