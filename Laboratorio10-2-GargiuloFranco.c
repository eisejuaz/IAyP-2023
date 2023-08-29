// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

prueba

typedef struct {
  char nom[25];
  char ape[50];
  int dni;
  int edad;
} TPersona;

typedef struct nodo {
  TPersona info;
  struct nodo * next;  
} TElem;

TElem *q;

bool Vacia(TElem *list);
void Crear(TElem *list);
void InsertarCab(TElem *list, TPersona reg);
void SuprimirCab(TElem *list);
void Listar(TElem list);

int main () {

    

    return 0;
}

bool Vacia(TElem *list) {
  return list = NULL;
};

void Crear(TElem *list) {
  list = NULL;
};

void InsertarCab(TElem *list, TPersona reg) {
  TElem aux;
  aux = (TNodo * ) malloc (sizeof(TNodo));
  aux -> info.nom = reg.nom;
  aux -> info.ape = reg.ape;
  aux -> info.dni = reg.dni;
  aux -> info.edad = reg.edad;
  
};

void SuprimirCab(TElem *list) {

};

void Listar(TElem list) {

};
