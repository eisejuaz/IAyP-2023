// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

// Incluyo las librerias
#include <stdio.h>
#include <string.h>

// Lexico
// Defino los structs que necesito, primero el TDatos con un anio y monto, luego el TNodo para la lista con un campo con el registro TNodo y los punteros en ambas direcciones
typedef struct {
  int anio;
  float monto;
} TDatos;

typedef struct {
  TDatos info;
  struct nodo *next;
  struct nodo *back;
} TNodo;

// Defino las variables

TNodo *q;
float monto;
char msg[50];

// Defino perfiles
void MostrarLista();
void Crear();
void CargarLista();

// Programa principal
int main void() {
  
  /*Crear(q);
  strcpy(msg, "Cuantos nodos va a agregar?");
  printf("%s", msg);
  scanf("%d", cant);*/

  return 0;
}

// Implementaciones
void MostrarLista();
void Crear();
void CargarLista();