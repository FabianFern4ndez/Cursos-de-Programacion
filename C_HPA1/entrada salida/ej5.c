/*    Elabore un programa en C que, dada una hora, 
el programa indique a cuánto equivalen esas horas en minutos y a cuánto equivalen en segundos. */

#include<stdio.h>
void main(){
    //bloque de variables
    int hor, min, seg;
    //bloque de instrucciones
    printf("Escriba la hora de esta forma 00:00:00 -> ");
    scanf("%d:%d:%d", &hor, &min, &seg);
    //procesos 
    min = (hor*60) + min + (seg/60);
    seg = min*60;
    printf("La cantidad de minutos es de: %d \n", min);
     printf("La cantidad de segundos es de: %d \n", seg);
}