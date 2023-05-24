// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>

// Lexico
float num1;
float num2;
float num3;
float num4;
float num5;
float num6;
float mayor;

// perfiles
float Max(float a, float b);

void main()
{
  num1 = 2000;
  num2 = 50000;
  num3 = 71;
  num4 = 89;
  num5 = 370;
  num6 = 10;

  mayor = Max(Max(Max(Max(Max(num1,num2),num3),num4),num5),num6);

  printf("\nEl mayor es: %.2f", mayor);
}

// implementaciones
float Max(float a, float b)
{
  return ((a + b) + abs(a - b)) / 2;
};