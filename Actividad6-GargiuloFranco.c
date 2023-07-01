// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>

// Lexico

#define CMax 20 // pongo como máximo 20 elementos en el arreglo

typedef struct
{
  int a[CMax];
  int cant;
} TData;

TData ordenado;

void InsertarNumero(TData arr);

// Perfiles

int main()
{
  // Inicializo el registro con 8 valores
  ordenado.a[0] = 1;
  ordenado.a[1] = 2;
  ordenado.a[2] = 3;
  ordenado.a[3] = 3;
  ordenado.a[4] = 5;
  ordenado.a[5] = 6;
  ordenado.a[6] = 6;
  ordenado.a[7] = 8;
  // Actualizo cant
  ordenado.cant = 8;

  InsertarNumero(ordenado);

  return 0;
}

// Implementaciones
void InsertarNumero(TData arr)
{
  // Lexico local
  int i, j;
  int aux;

  // Muestro el arreglo inicial
  printf("\nEl arreglo inicial es: ");

  for (i = 0; i < arr.cant; i++)
  {
    printf("[%d]", arr.a[i]);
  }

  // Pido al usuario que ingrese un numero y lo almaceno en aux
  printf("\nIngrese un numero entero, por favor\n");
  scanf("%d", &aux);

  // Chequeo tener lugar en el arreglo para ingresar el nuevo valor, o informo que no hay lugar
  if (arr.cant < CMax)
  {
    // Veo si el valor es mayor que todos, y directamente lo agrego al final y actualizo cant
    if (aux >= arr.a[arr.cant - 1])
    {
      arr.a[arr.cant] = aux;
      arr.cant++;
    } // Si no...
    else
    {
      // Recorro el arreglo hasta cant
      i = 0;
      while (i < arr.cant)
      {
        // Si encuentro un componente mayor o igual a aux, desplazo todo hasta esa posicion]
        if (aux <= arr.a[i])
        {
          for (j = arr.cant - 1; j >= i; j--)
          {
            arr.a[j + 1] = arr.a[j];
          }

          // Ingreso aux en posicion i, actualizo cant e interrumpo con break
          arr.a[i] = aux;
          arr.cant++;
          break;
        }
        i++;
      }
    }
  }
  else
  {
    printf("\nNo se pueden agregar elementos, comience nuevamente el programa.\n");
  }

  // Muestro el arreglo con el nuevo elemento
  printf("\nEl arreglo con el nuevo elemento es: ");
  for (i = 0; i < arr.cant; i++)
  {
    printf("[%d]", arr.a[i]);
  }
}