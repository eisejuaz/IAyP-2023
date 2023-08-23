// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// Lexico
#define Max 50

typedef struct // declaro TPersona
{
  char ape[50];
  int dni;
} TPersona;

typedef struct {
  TPersona arr[Max];
  int cant;
} TData;

TData listado;
int dniBuscado;

// Perfiles
void Cargar(TData *arr);
void NombreDoc(TData arr, int dni);

// Main
int main() {

  Cargar(&listado);

  printf("\nIngrese el dni a buscar:\n");
  scanf("%d", &dniBuscado);

  printf("\nBuscando %d\n", dniBuscado);
  
  NombreDoc(listado, dniBuscado);

  return 0;
}

// Implementaciones
void Cargar(TData *emptyArr) { 

  // lexico local
  int i; // indice
  int check; // control de corte

  i = 1;
  check = 1;

  emptyArr->cant = 0;

  printf("\nIngrese hasta %d apellidos seguidos de sus dni, por favor.\n", Max);
  
  while (i <= Max && check == 1) {  

    scanf("%s",&emptyArr->arr[i].ape);
    scanf("%d",&emptyArr->arr[i].dni);

    emptyArr->cant = emptyArr->cant + 1;

    printf("\nHas cargado %s y %d y tu cant es %d.\n", emptyArr->arr[i].ape,emptyArr->arr[i].dni,emptyArr->cant);

    i++;

    if (i <= Max) {
      printf("\nPara continuar, presione 1.\nSi desea terminar la carga, presione 0.\n");
      scanf("%d", &check);
    };

  };

};

void NombreDoc(TData fullArr, int dni) {
  
  // lexico local
  int i; //indice
  char mje[50]; //mensaje de salida
  char persona[50]; // apellido encontrado
  
  strcpy(mje,"\nNo se ha encontrado el dni.\n");

  while (i <= Max || dni != fullArr.arr[i].dni) {
    if (dni == fullArr.arr[i].dni) {
      strcpy(mje,"\nDNI encontrado!");
      strcpy(persona,fullArr.arr[i].ape);
      printf("\n La persona es %s.\n",persona);
    };

  };

};