// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
    char info[10];
    struct nodo * next;
    struct nodo * back;
} TNodo;

TNodo *p, *r, *s, *t;

void MostrarLista(TNodo * list);

int main () {

    // cargo el ultimo nodo, que queda apuntando a null en su next
    p = (TNodo * ) malloc (sizeof(TNodo));

    strcpy(p -> info, "va?");

    p -> next = NULL;

    p -> back = NULL;

    // creo otro y los enlazo
    t = (TNodo * ) malloc (sizeof(TNodo));
    
    p -> back = t;

    strcpy(t -> info, "te");

    t -> next = p;

    // creo otro y los enlazo
    s = (TNodo * ) malloc (sizeof(TNodo));

    t -> back = t;
    
    strcpy(s -> info, "como");

    s -> next = t;

    // creo otro y los enlazo
    r = (TNodo * ) malloc (sizeof(TNodo));

    s -> back = s;

    strcpy(r -> info, "Hola");

    r -> next = s;

    r -> back = NULL;

    MostrarLista(r);

    return 0;
}

void MostrarLista (TNodo * list) {
    TNodo *aux;

    aux = list;

    while(aux != NULL) {
        printf("%s ",aux -> info);
        aux = aux -> next;
    }
};

//void MostrarLista (TNodo * list) {

//};