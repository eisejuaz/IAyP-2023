// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
    int info;
    struct nodo * next;
    struct nodo * back;
} TNodo;

TNodo *p, *r, *r, *t;

void MostrarLista(TNodo * list);

int main () {

    // cargo el ultimo nodo, que queda apuntando a null en su next
    p = (TNodo * ) malloc (sizeof(TNodo));

    p -> info = "va?";

    p -> next = NULL;

    p -> back = NULL;

    // creo otro y los enlazo
    t = (TNodo * ) malloc (sizeof(TNodo));

    p -> back = t;

    t -> info = "te";

    t -> next = p;

    // creo otro y los enlazo
    s = (TNodo * ) malloc (sizeof(TNodo));

    t -> back = t;
    
    s -> info = "como";

    s -> next = t;

    // creo otro y los enlazo
    r = (TNodo * ) malloc (sizeof(TNodo));

    s -> back = s;

    r -> info = "Hola";

    r -> next = s;

    r -> back = NULL;

    MostrarLista(&r);

    return 0;
}

void MostrarLista (TNodo * list) {
    TNodo *aux;

    aux = list;

    while(aux -> next != NULL) {
        printf("%s ",aux -> info);
    }
};

//void MostrarLista (TNodo * list) {

//};