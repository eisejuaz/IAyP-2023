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
void BuscarDico(TData d, int e, int *pos);

// main function
int main() {

    srand(time(NULL));

    strcpy(msg, "Ingrese la cantidad de elementos a carga: ");

    printf("%s", msg);

    scanf("%d", &datos.cant);

    CrearDatos(&datos);

    for (i = 0; i <= datos.cant - 1; i++) {
        printf("%d,", datos.a[i]);
    };

    strcpy(msg, "\nIngrese un numero a buscar: ");

    printf("%s", msg);

    scanf("%d", &num);

    Insercion(&datos);

    for (i = 0; i <= datos.cant - 1; i++) {
        printf("%d,", datos.a[i]);
    };

    BuscarDico(datos, num, &pos); 

    strcpy(msg, "\nLa posicion del numero buscado es: (-1 sino está)");

    printf("%s %d", msg, pos);

    return 0;
}

// implementaciones
void CrearDatos(TData *d) {
    int i;

    for (i = 0; i < d->cant; i++) {
        d->a[i] = rand() % (100 - 1) + 1;
    };
};


void Insercion(TData *d) {
    int i,j,aux;
    i = 1;
    while(i < d->cant) {
        aux = d->a[i];
        j=i-1;
        
        while(j >= 0 && d->a[j] > aux) {
            d->a[j+1] = d->a[j];
            j--;
        };
        
        d->a[j+1] = aux;
        i++;
 };
};

void BuscarDico(TData d, int e, int *pos) {
    int k, inf, sup;

    if (e < d.a[1] || e > d.a[d.cant]) {
        *pos = 1;
    } else
        if (e > d.a[1] && e >= d.a[d.cant]) {
            inf = 1;
            sup = d.cant;
            while (inf < sup) {
                k = (inf + sup) / 2;

                if (e > d.a[k]) {
                    inf = k + 1;
                } else if (e <= d.a[k]) {
                    sup = k;
                };                
            };

            if (d.a[inf] == e) {
                *pos = inf;
            } else {
                *pos = -1;
            };        
    };
};