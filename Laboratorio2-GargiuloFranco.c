// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>

// Lexico
int num; // variable entrada
int i;   // contador
int res; // variable para cada multiplicacion

// Inicio
void main()
{
  printf("\nIngrese un numero, por favor: \n"); // pido que ingresen un valor
  scanf("%d", &num); // lo almaceno en num

  i = 0; // inicializo el contador del while

  while (i <= 10) // mientras mi contador sea menor o igual a 10...
  {
    res = num * i; // multiplico num x contador
    printf("\n%i x %i = %i\n", num, i, res); // presento en consola
    i = i + 1; // actualizo contador
  }
}