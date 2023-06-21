// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lexico
#define Max 30 // maximo de elementos en un arreglo

typedef struct {
  int a[Max];
  int cant;
} TData;

TData nums;

// Perfiles
void Sortear(TData *arr);

void Informar(TData arr);

// Main function
int main() {
  
  srand(time(NULL));
  
  Sortear(&nums);
  
  Informar(nums);
  
  return 0;
}

// Implementaciones
void Sortear(TData *arr){
  
  int i;
  
  printf("\nIngrese entre 1 y %d numeros a sortear:\n", Max);
  scanf("%d",&arr->cant);
  
  // valido que se hayan ingresado entre 1 y 30 valores
  while ((*arr).cant > Max || (*arr).cant < 1) {
    printf("\nEl valor ingresado es incorrecto.");
    printf("\nIngrese entre 1 y %d numeros a sortear:\n", Max);
    scanf("%d",&arr->cant);
  }
  
  for(i = 0; i<(*arr).cant; i++) {
    arr->a[i] = rand() % (1000 - 1) + 1;
  }
};

void Informar(TData arr){
  
  int i;
  
  for(i = 0; i< arr.cant; i++) {
    printf("Numero %d = %d\n", i+1, arr.a[i]);
  }
};
