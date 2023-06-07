// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdbool.h>

// Léxico
char letra;
bool pruebaVocal;
bool pruebaConsonante;

// perfiles
bool esVocal(char caracter);
bool esConsonante(char caracter);

void main()
{
  printf("\nIngrese un caracter, por favor: \n");
  scanf("%c", &letra);

  pruebaVocal = esVocal(letra);
  pruebaConsonante = esConsonante(letra);

  if (pruebaVocal)
  {
    printf("\nLa letra %c es una vocal.\n", letra);
  }
  else if (pruebaConsonante)
  {
    printf("\nLa letra %c es una consonante.\n", letra);
  }
  else
  {
    printf("\nLa letra \" %c \" no es vocal ni consonante.\n", letra);
  }
}

// implementaciones
bool esVocal(char caracter)
{
  if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
  {
    return true;
  }
  else
  {
    return false;
  }
};

bool esConsonante(char caracter)
{
  if ((caracter >= 'a' && caracter <= 'z' || caracter >= 'A' && caracter <= 'Z') && !esVocal(caracter))
  {
    return true;
  }
  else
  {
    return false;
  }
};