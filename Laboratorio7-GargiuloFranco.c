// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdbool.h>

// Lexico
#define CMax 30 // maximo de caracteres
#define LMax 30 // maximo de elementos en el arreglo

typedef struct
{
  char a[CMax];
  int cant;
} TData; // defino que puede tener hasta CMax letras y LMax espacios el arreglo

TData frase;

bool capicua;

// Perfiles
void CargarFrase(TData *arr);
bool EsCapicua(TData arr);

// Main function
int main()
{
  // entrada del arreglo
  CargarFrase(&frase);

  // asigno a capicua el valor que retorne EsCapicua
  capicua = EsCapicua(frase);

  // si capicua es true, es capicua, si no, no es capicua
  if (capicua)
  {
    printf("\n\nSu palabra es capicua!\n");
  }
  else
  {
    printf("\n\nSu palabra NO es capicua :((( \n");
  }

  return 0;
}

// Implementaciones
void CargarFrase(TData *arr)
{
  // lexico local
  int i;

  // solicito ingresen la cantidad de letras a comparar
  printf("\nIngrese la cantidad de letras a cargar. (Min 1, max %d):\n", LMax);
  scanf("%d", &arr->cant);

  // valido que se hayan ingresado entre 1 y LMax valores
  while ((*arr).cant > LMax || (*arr).cant < 1)
  {
    printf("\nEl valor ingresado es incorrecto.");
    printf("\nIngrese entre 1 y %d letras:\n", LMax);
    scanf("%d", &arr->cant);
  }

  printf("\nIngrese una letra y presione Enter:\n");

  // ingreso las letras de a una
  for (i = 0; i < (*arr).cant; i++)
  {
    scanf("%s", &arr->a[i]);
  }

  printf("\nLas letras ingresadas son:\t");

  // muestro los valores ingresados, para facilitar el chequeo
  for (i = 0; i < (*arr).cant; i++)
  {
    printf("[%c]", arr->a[i]);
  }
};

bool EsCapicua(TData arr)
{
  // lexico local
  int i;
  int j;
  bool test;

  test = true; // inicializo en true
  i = 0; // indice izquierdo
  j = arr.cant - 1; // indice derecho

  while (test == 1 && i < j) // mientras sea verdadero mi test o el indice izq sea menor o igual al indice der ejecuto:
  {
    if (arr.a[i] != arr.a[j]) // si no coinciden los valores en i y j, paso test a false
    {
      test = false;
    }
    // actualizo indices
    i++; 
    j--;
  }

  return test;
};
