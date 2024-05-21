/*    Elabore un programa en C que le solicite al usuario su edad y su ritmo cardiaco (ppm), 
el programa solo va a procesar las edades de personas que posean de 20 años en adelante 
para darle un diagnóstico. Para dar el diagnóstico considere la siguiente tabla de valores: */

#include<stdio.h>
#include <ctype.h>
void main(){
    //bloque de variables
    int edad;
    int ppm;
    char gnr;
    //entradas
    printf("Escriba h si es hombre / Escriba m si es mujer: ");
    scanf("%c",&gnr);
    gnr = tolower(gnr);
    printf("Escriba su edad (solo se consideraran mayores de 20 años): ");
    scanf("%d", &edad);
    printf("Escriba su ritmo cardiaco en ppm: ");
    scanf("%d", &ppm);

    //salidas
    switch(gnr){
    case 'h' : //casos para hombre
    if (19<edad<30){ //entre 20 y 29
         if(ppm>85){printf("Su ritmo cardiaco es inadecuado");}
         
    

    }
   
    }

    }
   
