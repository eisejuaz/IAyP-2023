// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// lexico
int num;
char msg[100];

// perfiles
int Sumatoria(int n);

// main
int main() {

    strcpy(msg, "Ingrese un valor para ver la sumatoria desde 1 al numero dado, el numero debe ser natural.\n");
    printf("%s",msg);
    scanf("%d", &num);
    strcpy(msg, "Sumatoria con aumento: \n");
    printf("%s %d\n ", msg, Sumatoria(num));

    return 0;
}

// implementaciones
int Sumatoria(int n) {
    if (n==1) {
        return 1;
    } else {
        return n + Sumatoria(n - 1);
    }
}