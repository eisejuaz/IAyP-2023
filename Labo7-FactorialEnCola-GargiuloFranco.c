// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// lexico
int num, resultado;
char msg[120];


// perfiles
int factorialAumento(int n);
void FactorialCola(int n, int *res);
void menu();

// main
int main() {
    menu();
    return 0;
}

// implementaciones
int factorialAumento(int n) {
    if (n==1) {
        return 1;
    } else {
        return n * factorialAumento(n - 1);
    };
};

void FactorialCola(int n, int *res) {
    if (n == 0) {
        *res = 1;
    } else if (n == 1) {
        *res * 1;
    } else {
        *res = *res * n;
        FactorialCola(n-1, res);
    };
};

void menu() {
    strcpy(msg, "Ingrese un valor para ver su factorial en ambas versiones, en caso de ingresar negativo se finaliza el programa:\n");
    printf("%s", msg);
    scanf("%d", &num);
    while (num > 0) {
        resultado = 1;
        strcpy(msg, "Factorial con aumento: ");
        printf("%s %d\n",msg, factorialAumento(num));
        strcpy(msg, "Factorial con cola: \n");
        FactorialCola(num, &resultado);
        printf("%s %d\n", msg, resultado);
        strcpy(msg, "Otro factorial:");
        printf("%s", msg);
        scanf("%d", &num);
    }        
};