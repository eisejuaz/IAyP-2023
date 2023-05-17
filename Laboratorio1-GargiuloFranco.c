// Materia: Introduccion a la algoritmica y programacion
// AÃ±o: 2023
// Comision: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// Lexico

int edad; // entrada de la edad
char madurez[40]; // salida de la clase de ciudadano segun la edad

// Inicio

void main() {
 
  printf("\nPor favor, ingrese la edad del ciudadano:\n");
  scanf("%d", &edad);
  
  while (edad < 0) {
    // controlo que ingresen valores validos, o reitero el pedido de entrada
    printf("\nPor favor, ingrese una edad correcta.\n");
    scanf("%d", &edad);
  }
  
  if (edad >= 0 && edad <= 11) {
    strcpy(madurez, "\nEl ciudadano es niÃ±a/o.\n");
  } else if (edad >= 12 && edad <= 17) {
    strcpy(madurez, "\nEl ciudadano es adolescente.\n");
  } else if (edad >= 18 && edad <= 49) {
    strcpy(madurez, "\nEl ciudadano es adulto.\n");
  } else {
    strcpy(madurez, "\nEl ciudadano es adulto mayor.\n");
  }
  
  printf("\n%s\n", madurez);

}