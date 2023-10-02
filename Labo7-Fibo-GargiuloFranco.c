// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// lexico
int num;
char msg[120];

// perfiles
int fibonacci(int n);

// main
int main() {
    while (num <= 0) {
        strcpy(msg, "Ingrese que número de la serie fibonacci quiere saber: ");
        printf("%s", msg);
        scanf("%d", &num);
    };
    printf("%d\n", fibonacci(num));

    return 0;
}

// implementaciones
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
};