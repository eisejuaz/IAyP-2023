// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>

// Léxico

// Entrada
float horas;     // cantidad de horas trabajadas, asumo que pueden incluirse valores con decimales
float valorHora; // valor de la hora normal trabajada, también asumo que puede recibir decimales en el futuro
                 // la consigna aclaraba $10 como dato de valor hora, pero en mi solución lo asumo flexible

// Variables intermedias
float horasExtra;     // desgloso las horas trabajadas por encima de las 40, en caso de hacer falta
float valorHoraExtra; // desgloso el valor de la hora extra, en caso de hacer falta

// Resultado
float salarioTotal; // variable que almacenará el salario completo

// Inicio

void main() {

  printf("\n**********************************************\n");
  printf("\nBienvenido a la calculadora de salarios!\n");
  printf("\n**********************************************\n");

  printf("\nPor favor, introduzca la cantidad de horas trabajadas:\n");
  scanf("%f", &horas);

  printf("\nAhora introduzca el valor de cada hora normal trabajada, por favor:\n");
  scanf("%f", &valorHora);

  if (horas <= 40) { // caso sin horas extra, hasta 40 horas

    salarioTotal = horas * valorHora;

  } else { // caso con horas extra

    horasExtra = horas - 40;          // calculo la cantidad de horas extra trabajadas
    valorHoraExtra = valorHora * 1.5; // calculo el valor de la hora extra como el 50% de la hora normal
    horas = horas - horasExtra;       // sustraigo las horas extra de las horas normales
    salarioTotal = (horas * valorHora) + (horasExtra * valorHoraExtra);

  }

  printf("\nEl salario total de este mes es: $%.2f\n", salarioTotal); // devuelvo el salario total redondeado a dos dígitos
  
}