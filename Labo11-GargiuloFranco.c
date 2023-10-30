// Materia: Introducción a la algorítmica y programación
// Año: 2023
// Comisión: 3
// Alumno: Franco Gargiulo

#include <stdio.h>
#include <string.h>

// lexico
FILE *f;
char elementoActual, elementoDado;
char mge[150];
int i, iguales, distintos;

// perfiles
void CargarArchivo(FILE *(*f));

int main() {
  CargarArchivo(&f);
  f=fopen("secu.txt","r");
  
  iguales = 0;
  distintos = 0;
  
  strcpy(mge, "\nIngrese el Caracter a buscar cuantos iguales y distintos hay\n");
  printf("%s",mge);
  scanf("%c",&elementoDado);
  getchar();
  
  while ((elementoActual=fgetc(f)) != EOF) {
    if (elementoActual == elementoDado) {
      iguales++;
    } else {
      distintos++;
    };
  };
  
  printf("\nCantidad de elementos iguales:  %d",iguales);
  printf("\nCantidad de elementos distintos:  %d\n",distintos);
  
  fclose(f);
  
  return 0;
}

// implementaciones
void CargarArchivo(FILE *(*g)){
  char mge[150];
  int cantidadElementos;
  char elem;
  *g=fopen("secu.txt","w");
  strcpy(mge, "\nIngrese cuantos elementos desea cargar en el archivo\n");
  printf("%s",mge);
  scanf("%d",&cantidadElementos);
  getchar();
  
  for(i=0; i < cantidadElementos; i++) {
    strcpy(mge, "\nIngrese un elemento: ");
    printf("%s",mge);
    scanf("%c",&elem);
    getchar();
    fputc(elem,*g);
  };
  
  fclose(*g);
};