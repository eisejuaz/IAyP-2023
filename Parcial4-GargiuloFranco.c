// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// lexico
#define MAX 100

typedef struct {
  int a[MAX];
  int cant;
} TData;

TData datos;

int i, pos, num;

char msg[150];

// perfiles
void CrearDatos(TData *d);

// main function
int main() {

    srand(time(NULL));

    strcpy(msg, "Ingrese la cantidad de elementos a carga: ");

    printf("%s", msg);

    scanf("%d", &datos.cant);

    printf("\ntengo lista la cant : %d", datos.cant);

    CrearDatos(&datos);

    for (i = 0; i <=datos.cant; i++)
    {
        printf("%d", datos.a[i]);
    };

    return 0;
}

// implementaciones
void CrearDatos(TData *d) {
    int i;

    for (i = 0; i < (*d).cant ; i++) {
        d->a[i] = rand() % (100 - 1) + 1;
    };
};

