// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <math.h>

// Léxico
int num;   // variable valor consultado
int count; // contador
int aux;   // variable auxiliar
char *mge; // mensaje de salida

void main()
{
  count = 3;
  aux = count;

  printf("\nIngrese un numero por favor: \n\n");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    // descarto los números pares
    mge = "El valor ingresado no es un primo.";
  }
  else
  {
    while (count <= sqrt(num) && aux != 0)
    {
      // verifico que el num evaluado no tenga resto exacto al dividirse por un contador que se incrementa de a 2, y que el contador sea menor que la raiz de num
      aux = num % count;
      count = count + 2;
    }
    if (aux == 0)
    {
      // si luego del loop aux vale 0, significa que num no era primo
      mge = "El valor ingresado no es un primo.";
    }
    else
    {
      // caso contrario, habremos encontrado que num es primo
      mge = "El valor ingresado es un primo.";
    }
  }

  printf("\n%s\n", mge);
}