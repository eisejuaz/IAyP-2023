// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// Lexico

struct TCarta // declaro Tcarta
{
  int num;
  char palo[10];
};
// creo cada instancia de TCarta que necesito
struct TCarta car1;
struct TCarta car2;
struct TCarta car3;

// REVISAR
int coincidencias;

// perfiles
int contarCoincidencias(char palo1[10], char palo2[10], char palo3[10]);

void main()
{

  // carta 1
  printf("\nPor favor, ingrese la primera carta indicando primero el numero, luego el palo. Las opciones son: \n\n1) oro\n2) copa\n3) espada\n4) basto \n\n");
  scanf("%d", &car1.num);
  scanf("%s", car1.palo);

  // carta 2
  printf("\nPor favor, ingrese la segunda carta:\n\n");
  scanf("%d", &car2.num);
  scanf("%s", car2.palo);

  // carta 3
  printf("\nPor favor, ingrese la tercera carta:\n\n");
  scanf("%d", &car3.num);
  scanf("%s", car3.palo);

  // printf("El palo de la primera cartas es: %s\n", car1.palo);
  // printf("El palo de la segunda cartas es: %s\n", car2.palo);
  // printf("El palo de la tercera cartas es: %s\n", car3.palo);

  // coincidencias = strcmp(car1.palo, car2.palo);
  // printf("tenemos %d coincidencias", coincidencias);
  coincidencias = contarCoincidencias(car1.palo, car2.palo, car3.palo);
  printf("\nTenemos %d coincidencias.\n", coincidencias);

  // printf("El numero de la primera cartas es: %d\n", car1.num);
  // printf("El palo de la primera cartas es: %s\n", car1.palo);
  // printf("El numero de la primera cartas es: %d\n", car2.num);
  // printf("El palo de la primera cartas es: %s\n", car2.palo);
  // printf("El numero de la primera cartas es: %d\n", car3.num);
  // printf("El palo de la primera cartas es: %s\n", car3.palo);
}

// implementaciones
int contarCoincidencias(char palo1[10], char palo2[10], char palo3[10])
{
  int count;
  count = 0;

  int compare1_2;
  int compare2_3;
  int compare1_3;

  compare1_2 = strcmp(palo1, palo2);
  compare2_3 = strcmp(palo2, palo3);
  compare1_3 = strcmp(palo1, palo3);

  if ((compare1_2 == 0) && (compare2_3 == 0))
  {
    count = 3;
  }
  // else if ((palo1 == palo2 && palo1 != palo3) || (palo1 == palo3 && palo1 != palo2) || (palo1 != palo2 && palo2 == palo3))
  // {
  //   count = 2;
  // }
  return count;
};