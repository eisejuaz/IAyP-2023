// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

// Incluyo las librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Lexico
// Defino los structs que necesito, primero el TDatos con un anio y monto, luego el TNodo para la lista con un campo con el registro TNodo y los punteros en ambas direcciones
typedef struct {
  int anio;
  float monto;
} TDatos;

typedef struct nodo {
  TDatos info;
  struct nodo *next;
  struct nodo *back;
} TNodo;

// Defino las variables

TNodo *q;
float monto;
char msg[50];
int cant;

// Defino perfiles

void MostrarLista(TNodo * list, float number);
void Crear(TNodo * pointer);
void CargarLista(TNodo * list, int num);

// Programa principal
int main() {
  
  Crear(q);
  strcpy(msg, "Cuantos nodos va a agregar?\n");
  printf("%s", msg);
  scanf("%d", &cant);
  CargarLista(q,cant);
  strcpy(msg, "Que monto quiere comparar?\n");
  printf("%s", msg);
  scanf("%f", &monto);
  printf("El monto es %.2f\n", monto);
  MostrarLista(q,monto);
  
  return 0;
}

// Implementaciones

void MostrarLista(TNodo * list, float number){
  TNodo * aux;
  int count;
  
  aux = (TNodo *) malloc (sizeof(TNodo));
  count = 0;
  aux = list;
  
  while(aux != NULL){
    if (aux->info.monto >= number) {
      count ++;
    };
    aux = aux->next;
  };
  printf("Tenemos %d montos por arriba\n", count);
};

void Crear(TNodo * pointer){
  pointer = NULL;
};


void CargarLista(TNodo * list, int num){
  TDatos bono;
  TNodo * aux;
  int i;

  for(i = 1; i <= num; i++) {
    printf("Ingrese un anio\n");
    scanf("%d", &bono.anio);
    printf("Ingrese un monto\n");
    scanf("%f", &bono.monto);
    aux = (TNodo *) malloc (sizeof(TNodo));
    aux->info = bono;
    
    if (list != NULL) {
      aux->next = list;
      aux->back = NULL;
      list = aux;
    } else {
          printf("estoy aca\n");
      aux->next = list;
                printf("estoy aca2\n");
      aux->back = NULL;
                printf("estoy aca3\n");
      list->back = aux;
                printf("estoy aca4\n");
      list = aux;
                printf("estoy aca5\n");
      printf("pase en segundo\n");
    }
  }
};