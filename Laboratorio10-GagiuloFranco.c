// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int info;
    struct nodo * next;
} TNodo;

TNodo *p, *q, *r, *s, *t;

int main () {

    q = (TNodo * ) malloc (sizeof(TNodo));

    q -> info = 14;

    q -> next = NULL;

    s = (TNodo * ) malloc (sizeof(TNodo));

    s -> info = 25;

    s -> next = q;

    s = q;

    s = (TNodo * ) malloc (sizeof(TNodo));

    s -> info = 20;

    s -> next = q;

    q = s;

    s = NULL;

    s = (TNodo * ) malloc (sizeof(TNodo));

    s -> info = 11;

    s -> next = q;

    q = s;

    s = NULL;
    
    r = q;
    
    r = r -> next;
    
    t = r -> next;
    
    s = (TNodo * ) malloc (sizeof(TNodo));
    
    s -> info = 3;
    
    s -> next = r -> next;
    
    r -> next = s;
    
    p = t;
    
    t -> info = 29;
    
    printf("\n %d \n", t -> info);
    
    while (r != NULL) {
      printf("\n %d\n", r -> info);
      r = r -> next;
    }

    return 0;
}
