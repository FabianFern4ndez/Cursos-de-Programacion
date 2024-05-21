/*    Elabore un programa en C que, dada una hora, 
el programa indique a cuánto equivalen esas horas en minutos y a cuánto equivalen en segundos. */

#include<stdio.h>

int min(int hor, int minutos, int seg){
  
minutos = (hor*60) + minutos + (seg/60);
return minutos;
}

void main(){
    //bloque de variables
    int hor,minutos, seg;
    //bloque de instrucciones
    printf("Escriba la hora de esta forma 00:00:00 -> ");
    scanf("%d:%d:%d", &hor, &minutos, &seg);
    //procesos 
    seg = min(hor,minutos,seg)*60;
    printf("La cantidad de minutos es de: %d \n", min(hor,minutos,seg));
     printf("La cantidad de segundos es de: %d \n", seg);
}