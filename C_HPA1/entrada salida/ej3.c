/*    Elabore un programa en C que calcule el impuesto y el total a pagar por tres productos, 
dados por el usuario los precios de cada uno de ellos. Debe imprimir el impuesto y el total a pagar. */

#include<stdio.h>
void main(){
    //bloque de variables
    float p1, p2, p3;
    float total;
    float impuesto;
    //bloque de instrucciones
    printf("Escriba el precio del primer producto: ");
    scanf ("%f",&p1);
    printf("Escriba el precio del segundo producto: ");
    scanf ("%f",&p2);
    printf("Escriba el precio del tercero producto: ");
    scanf ("%f",&p3);
    //procesos
    impuesto = (p1+p2+p3)*0.07;
    total = (p1+p2+p3) + impuesto;
    //salida
    printf("El total a pagar es de: %.2f , el impuesto fue de %.2f \n" , total, impuesto); 


}