// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>

#define NMax 7

typedef struct {
  int n[NMax];
  int cant;
}TData;

TData notas;

int i;

int main() {

  i=0;
  
  printf("Ingrese las siete notas:\n");
  
  while(i<NMax) {
    scanf("%d",&notas.n[i]);
    i++;
  }

  i=0;

  while(i<NMax) {
    printf("La nota numero %d ingresada fue %d.\n",i+1,notas.n[i]);
    i++;
  }
  
  return 0;
}
