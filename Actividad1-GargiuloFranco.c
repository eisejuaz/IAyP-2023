#include <stdio.h>

// Lexico
float altoPared; //dato
float anchoPared; //dato
float costoM2; //dato
float supPared; //resultado intermedio
float costoMdeO; //resultado

//INICIO
int main(){
printf("\n Ingrese el alto de la pared ");
scanf("%f",&altoPared);
printf("\n Ingrese el ancho de la pared ");
scanf("%f",&anchoPared);
printf("\n Ingrese el costo del metro cuadrado "); // corrijo el texto para pedir el costo del metro cuadrado en lugar del costo de mano de obra
scanf("%f",&costoM2);
supPared = anchoPared * altoPared;
costoMdeO = (supPared * costoM2) * 1.2; // multiplico por 1.2 para sumar el 20%
printf("El costo de Mano de Obra para pintar la pared es: %.2f \n",costoMdeO);
//%.2f escribe el número con solo dos decimales
return 0;
}
