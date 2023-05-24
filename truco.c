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
int puntosCarta(int num);
int puntosDosCartas(int num1, int num2, int num3);
int puntosTresCartas(int num1, int num2, int num3);

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
  else if (coincidencias == 3)
  {
    puntos_envido = puntosTresCartas(puntosCarta(car1.num), puntosCarta(car2.num), puntosCarta(car3.num));
  }

  printf("\nLos puntos son: %d\n", puntos_envido);
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

int puntosCarta(int num)
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

int puntosDosCartas(int num1, int num2, int num3) // recibira las variables compare* para saber cuales 2 cartas sumar
{
  int puntos;
  puntos = 20;

  if (num1 == 0) // caso que car1 y car2 sean del mismo palo
  {
    puntos = puntos + puntosCarta(car1.num) + puntosCarta(car2.num);
  }
  else if (num2 == 0) // caso que car2 y car3 sean del mismo palo
  {
    puntos = puntos + puntosCarta(car2.num) + puntosCarta(car3.num);
  }
  else if (num3 == 0) // caso que car1 y car3 sean del mismo palo
  {
    puntos = puntos + puntosCarta(car1.num) + puntosCarta(car3.num);
  };

  return puntos;
};

int puntosTresCartas(int num1, int num2, int num3) // recibira los los puntosCarta de cada carta
{
  int puntos;
  int parcial1;
  int parcial2;

  puntos = 20;
  parcial1 = 0;
  parcial2 = 0;

  if (num3 < num2 && num3 < num1) // caso ++-
  {
    parcial1 = num1;
    parcial2 = num2;
  }
  else if (num2 < num3 && num2 < num1) // caso +-+
  {
    parcial1 = num1;
    parcial2 = num3;
  }
  else if (num1 < num2 && num1 < num3) // caso -++
  {
    parcial1 = num2;
    parcial2 = num3;
  }
  else if (num1 > num2 && num2 == num3) // los siguientes son los casos de tipo 7,11 y 12 del mismo palo, donde las figuras suman 0 y da igual cual de las dos se elija
  {
    parcial1 = num1;
    parcial2 = num2;
  }
  else if (num2 > num1 && num1 == num3)
  {
    parcial1 = num1;
    parcial2 = num2;
  }
  else if (num3 > num1 && num1 == num2)
  {
    parcial1 = num3;
    parcial2 = num2;
  };

  puntos = puntos + parcial1 + parcial2;

  return puntos;
}