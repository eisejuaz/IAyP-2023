// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdbool.h>

// Lexico

#define Fil 3 // pongo como máximo 20 elementos en el arreglo a
#define Col 4 // pongo como máximo 35 elementos en el arreglo b

typedef struct {
  int a[Fil][Col];
  int cantFila;
  int cantColumna;
} TData;

TData bidimensional;

int numeroBuscado;
bool control;

// Perfiles

bool ContieneNum(TData arr, int num);
void Resultado(bool res);

// Main

int main() {

  // inicializo el array
  bidimensional.a[0][0] = 1;
  bidimensional.a[0][1] = 4;
  bidimensional.a[0][2] = 2;
  bidimensional.a[0][3] = 9;

  bidimensional.a[1][0] = 2;
  bidimensional.a[1][1] = 6;
  bidimensional.a[1][2] = 8;
  bidimensional.a[1][3] = 6;

  bidimensional.a[2][0] = 2;
  bidimensional.a[2][1] = 6;
  bidimensional.a[2][2] = 3;
  bidimensional.a[2][3] = 7;
  
  bidimensional.cantFila = 3;
  bidimensional.cantColumna = 4;

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
      if (arr.a[i][j] == num) {  
        aux = aux + 1;
        printf("\nHe encontrado la ocurrencia #%d de %d en la posicion a[%d][%d]", aux, num,i,j);
      }      
    }
  }  
  return aux >=3; // devuelvo un boolean con la comparacion si aux llego o supero 3
};

void Resultado(bool res) {
  // muestro por pantalla si mi resultado es 1 (true) o 0 (false)
  if (res == 1) {
    printf("\n\nEl numero se encuentra 3 o mas veces!");
  } else {
    printf("\n\nEl numero se encontro menos de 3 veces.");
  }  
};