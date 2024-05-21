/*Elabore un programa en C que permita calcular el área y el perímetro de un cuadrado, 
solicitando la longitud de sus lados. Mostrar los resultados en pantalla. */

#include<stdio.h>
void main(){
    //declaración de variables
    float lado;
    float area;
    float perim;
    //bloque de instrucciones
    printf("Escriba el valor del lado del cuadrado: ");
    scanf("%f",&lado);                                              
    //procesos
    area = lado * lado;
    perim = 4 * lado;
    //salidas
    printf("El area del cuadrado es: %.2f y su perimetro es: %.2f" ,area , perim);

  


}