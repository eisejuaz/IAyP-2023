// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdbool.h>

// Lexico

#define Fil 4 // pongo como máximo 4 elementos en el arreglo a
#define Col 6 // pongo como máximo 6 elementos en el arreglo b

typedef int TMulti[Fil][Col];

typedef struct {
  TMulti arr;
  int cantFila;
  int cantColumna;
} TData;

TData bidimensional;

int numeroBuscado, i, j;
bool control;

// Perfiles

bool ContieneNum(TData arr, int num);
void Resultado(bool res);

// Main

int main() {

  // inicializo el array  
  TData bidimensional = {
        .arr = {
            {1, 4, 2, 9, 1, 6},
            {2, 6, 8, 6, 9, 2},
            {2, 6, 3, 7, 3, 1},
            {2, 6, 3, 7, 6, 9}
            }
  };

  bidimensional.cantFila = 4;

  // solicito el valor a buscar
  printf("\nIngrese un numero entero positivo, por favor: ");
  scanf("%d", &numeroBuscado);
  
  while (numeroBuscado < 0) {
    printf("\nValor equivocado. \nIngrese un numero entero positivo, por favor: ");
    scanf("%d", &numeroBuscado);
  }

  control = ContieneNum(bidimensional, numeroBuscado);

  Resultado(control);

  return 0;
}

// Implementaciones

bool ContieneNum(TData arr, int num) {
  //Lexico local
  int aux, i, j;

  // inicializo variables
  aux = 0;
  
  // recorro la matriz de 2 dimensiones usando i y j como indices respectivamente
  for (i = 0; i < Fil; i++) {
    for (j = 0; j < Col; j++) { // si el valor en el indice a[i][j] coincide con el numero buscado, incremento aux en 1 e informo donde se encontro
      if (arr.arr[i][j] == num) {  
        aux = aux + 1;
        printf("\nHe encontrado la ocurrencia #%d de %d en la posicion arr[%d][%d]", aux, num,i,j);
      }      
    }
  }  
  return aux > 3; // devuelvo un boolean con la comparacion si aux llego o supero 3
};

void Resultado(bool res) {
  // muestro por pantalla si mi resultado es 1 (true) o 0 (false)
  if (res == 1) {
    printf("\n\nEl numero se encuentra mas de 3 veces!");
  } else {
    printf("\n\nEl numero se encontro 3 veces o menos.");
  }  
};