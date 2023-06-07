// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 4
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// Lexico
typedef struct // declaro TCortina
{
  char tela[50];
  float precio;
} TCortina;

TCortina cortina1; // declaro las cortinas individuales
TCortina cortina2;
TCortina cortina3;

float precioFinal; // variable para el precio

// perfiles
void CargarCortinas(TCortina *c1, TCortina *c2, TCortina *c3);
void Oferta(TCortina c1, TCortina c2, TCortina c3, float *precio);

// main
void main()
{
  CargarCortinas(&cortina1,&cortina2,&cortina3);
  Oferta(cortina1, cortina2, cortina3, &precioFinal);
}

// implementaciones
void Oferta(TCortina c1, TCortina c2, TCortina c3, float *precio)
{
  if (strcmp(c1.tela, c2.tela) == 0 && strcmp(c2.tela, c3.tela) == 0)
  {
    printf("Aplica descuento!\n");
    *precio = c1.precio + c2.precio + (c3.precio * 0.7);
    printf("El precio final es: %.2f", *precio);
  }
  else
  {
    printf("No aplica descuento!\n");
    *precio = c1.precio + c2.precio + c3.precio;
    printf("El precio final es: %.2f", *precio);
  }
};

void CargarCortinas(TCortina *c1, TCortina *c2, TCortina *c3){
  printf("\nPor favor, ingrese una cortina, primero la tela, segundo el precio.\n");
  scanf("%s", cortina1.tela);
  scanf("%f", &cortina1.precio);

  printf("\nPor favor, ingrese la segunda cortina, primero la tela, segundo el precio.\n");
  scanf("%s", cortina2.tela);
  scanf("%f", &cortina2.precio);

  printf("\nPor favor, ingrese la tercera cortina, primero la tela, segundo el precio.\n");
  scanf("%s", cortina3.tela);
  scanf("%f", &cortina3.precio);
};