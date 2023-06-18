// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>

int a, b;

void Swap(int *x, int *y)
// acción que invierte los valores de los parámetros que se ingresan respectivamente en x e y
// por ejemplo: si se ingresan x=4 e y=7, al finalizar la ejecución de Swap x=7 e y=4
{
  printf("\n******** dentro de Swap ********\n"); // log
  
  printf("\ncomportamiento de la operacion: *x = (*x) + (*y)\n"); // log
  printf("x = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log
  *x = (*x) + (*y); // se almacena en "x" la suma de ambos parámetros
  printf("despues de la operacion:\n"); // log
  printf("x = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log

  printf("\ncomportamiento de la operacion: *y = (*x) - (*y)\n"); // log
  printf("x = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log
  *y = (*x) - (*y); // a "x", que tiene sumados ambos parámetros, se le resta "y", para que almacene ahora en "y" el valor inicial de "x"
  printf("despues de la operacion:\n"); // log
  printf("x = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log
  
  printf("\ncomportamiento antes de la operacion: *x = (*x) - (*y)\n"); // log
  printf("x = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log
  *x = (*x) - (*y); // a "x", que tenía sumados ambos parámetros, se le resta el nuevo valor que adquirió "y" en la línea previa, para que almacene en "x" el valor inicial de "y"
  printf("despues de la operacion:\n"); // log
  printf("x  = %d \n", x); // log
  printf("*x = %d \n", *x); // log
  printf("y = %d \n", y); // log
  printf("*y = %d \n", *y); // log

  printf("\n******** fin de Swap ********\n"); // log
}

int main()
{
  printf("\n******** primera carga de valores ********\n");// log

  printf("\nintroduce el valor de la variable a ");
  scanf("%i", &a);
  printf("introduce el valor de la variable b ");
  scanf("%i", &b);

  printf("\n******** fin primera carga de valores ********\n");// log

  Swap(&a, &b); // invertirá los valores de a y b que se ingresaron previamente haciendo que a ahora valga lo que valía b, y b lo ue valía a

  printf("\n******** salida de valores invertidos ********\n"); // log
  
  printf("\nel valor de a es %d \n", a); // imprime el valor que se ingresó en b
  printf("el valor de b es %d \n", b); // imprime el valor que se ingresó en a
  
  printf("\n******** segunda carga de valores ********\n"); // log
  
  printf("\nintroduce el valor de la variable a ");
  scanf("%i", &a);
  printf("introduce el valor de la variable b ");
  scanf("%i", &b);

  printf("\n******** fin segunda carga de valores ********\n"); // log

  Swap(&a, &a);
  
  printf("\nel valor de a es %d \n", a);

  return 0;
}

// para responder por qué el segundo Swap devuelve cero agregué algunos "logs" que me permitan entender mejor qué es lo que está ocurriendo dentro de la acción una vez compilada y ejecutando una pasada.

// al invocar Swap(&a, &a) podemos ver que fue "pisando" en el mismo lugar al pasar dos veces a. la primera asignación equivale a hacer a = a + a, pero ya en la segunda equivale a a = a - a y se convierte en cero, en lugar de restar el segundo valor al primero actualizado, como ocurre cuando pasamos variables diferentes. la tercera, que otra vez hace a = a - a equivale a 0 = 0 - 0, y por eso imprime cero. el segundo Swap siempre devolverá cero.

// caso 1:
// ingreso a = 2
// ingreso b = 4
// Swap(&a, &b)
// salida a = 4
// salida b = 2
// Swap(&a, &a)
// salida a = 0

// caso 2:
// ingreso a = -50
// ingreso b = 89
// Swap(&a, &b)
// salida a = 89
// salida b = -50
// Swap(&a, &a)
// salida a = 0