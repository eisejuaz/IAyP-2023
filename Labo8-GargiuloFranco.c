// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// lexico
#define Max 100

typedef struct // declaro TData
{
  int a[Max];
  int cant;
} TData;

TData datos;
int i;
char msg[50];

// perfiles
void Inicializar(TData *d);
void Intercambiar(int *a, int *b);
void Burbuja(TData *d);

//main

int main() {
  srand(time(NULL));
  
  strcpy(msg, "Ingrese la cantidad de elementos a cargar.\n");
  printf("%s", msg);
  scanf("%d", &datos.cant);
  
  Inicializar(&datos);
  
  //muestro el arreglo desordenado
  printf("\nArreglo desordenado\n");
  for(i = 1; i <= datos.cant; i++) {
    printf("%d\n",datos.a[i]);
  };
  
  Burbuja(&datos);
  
  //muestro el arreglo ordenado
  printf("\nArreglo ordenado\n");
  for(i = 1; i <= datos.cant; i++) {
    printf("%d\n",datos.a[i]);
  };
  
  return 0;
}

// implementaciones
void Inicializar(TData *d) {
  int i;
  for(i=1; i<= d->cant; i++) {
    d->a[i] = rand() % 100 + 1;
  };
};

void Intercambiar(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
};

void Burbuja(TData *d) {
  int i, j, temp;
  for(i = d->cant; i > 0; i--) {
    for(j = 0; j < i; j++) {
      if (d->a[j] > d->a[j+1]) {
        Intercambiar(&d->a[j], &d->a[j+1]);
      };
    };    
  };
};