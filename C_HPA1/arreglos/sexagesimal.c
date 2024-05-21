#include <stdio.h>
/*
int main() {
    int total_seconds = 3660; // Ejemplo: 1 hora, 1 minuto

    int hours = total_seconds / 3600; // Una hora tiene 3600 segundos
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("Tiempo: %d horas, %d minutos, %d segundos\n", hours, minutes, seconds);

    return 0;
}*/

int main(){
    int min, horas, seg, control;

     printf("1. Desde Segundos \n");
     printf("2. Desde Segundos \n");
     scanf("%d",&control);
     switch (control){
     case 1:
     printf("Introduzca segundos y te devolvemos la hora: ");
     scanf("%d",&seg);
     horas = seg /3600;
     min = (seg % 3600)/60;
     seg = seg % 60;
     printf("Tiempo: %d horas, %d minutos, %d segundos\n", horas, min, seg);
     break;

     case 2:
     printf("Introduzca minutos y te devolvemos la hora: ");
     scanf("%d",&min);
     break;
     }
}