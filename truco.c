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
int compare1_2;
int compare2_3;
int compare1_3;
int puntos_envido;

// perfiles
int contarCoincidencias(char palo1[10], char palo2[10], char palo3[10]);
int puntosQueSumaUnaCarta(int num);
int puntosDosCartas(int num1, int num2, int num3);

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

  puntos_envido = 0;

  compare1_2 = strcmp(car1.palo, car2.palo);
  compare2_3 = strcmp(car2.palo, car3.palo);
  compare1_3 = strcmp(car1.palo, car3.palo);

  coincidencias = contarCoincidencias(car1.palo, car2.palo, car3.palo);
  printf("\nTenemos %d coincidencias.\n", coincidencias);

  if (coincidencias == 2)
  {
    puntos_envido = puntosDosCartas(compare1_2, compare2_3, compare1_3);
  } 
  
  printf("\nLos puntos son: %d", puntos_envido);

}

// implementaciones
int contarCoincidencias(char palo1[10], char palo2[10], char palo3[10])
{
  int count;
  count = 0;

  if ((compare1_2 == 0) && (compare2_3 == 0))
  {
    count = 3;
  }
  else if ((compare1_2 == 0 && compare1_3 != 0) || (compare1_3 == 0 && compare1_2 != 0) || (compare1_2 != 0 && compare2_3 == 0))
  {
    count = 2;
  };
  return count;
};

int puntosQueSumaUnaCarta(int num)
{
  int puntos;

  if (num <= 7)
  {
    puntos = num;
  }
  else
  {
    puntos = 0;
  };

  return puntos;
};

int puntosDosCartas(int num1, int num2, int num3)
{
  int puntosEnvido;
  puntosEnvido = 20;

  if (num1 == 0) // caso que car1 y car2 sean del mismo palo
  {
    puntosEnvido = puntosEnvido + puntosQueSumaUnaCarta(car1.num) + puntosQueSumaUnaCarta(car2.num);
  }
  else if (num2 == 0) // caso que car2 y car3 sean del mismo palo
  {
    puntosEnvido = puntosEnvido + puntosQueSumaUnaCarta(car2.num) + puntosQueSumaUnaCarta(car3.num);
  }
  else if (num3 == 0) // caso que car1 y car3 sean del mismo palo
  {
    puntosEnvido = puntosEnvido + puntosQueSumaUnaCarta(car1.num) + puntosQueSumaUnaCarta(car3.num);
  };
};