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
void Insercion(TData *d);

// main function
int main() {

    srand(time(NULL));

    strcpy(msg, "Ingrese la cantidad de elementos a carga: ");

    printf("%s", msg);

    scanf("%d", &datos.cant);

    CrearDatos(&datos);

    for (i = 0; i <=datos.cant -1; i++) {
        printf("%d,", datos.a[i]);
    };

    strcpy(msg, "\nIngrese un numero a buscar: ");

    printf("%s", msg);

    scanf("%d", &num);

    return 0;
}

// implementaciones
void CrearDatos(TData *d) {
    int i;

    for (i = 0; i < (*d).cant; i++) {
        d->a[i] = rand() % (100 - 1) + 1;
    };
};

void Insercion(TData *d) {
    int aux, i, j;

    i = 2;

    while (i <= (*d).cant) {
        aux = d->a[i];
        j--;

        while (j > 0 && (*d).a[j] > aux) {
            (*d).a[j+1] <- (*d).a[j];
            
            j--;
        };

        (*d).a[j+1] = aux;
        i++;        
    };
    
};
