#include<stdio.h>

int main(){
    //variables
    int i;
    float vector[15], acum=0, prom=0;

    //entradas
    for(i=0;i<15;i++){
        printf("%d. Ingrese numero: ",i+1);
        scanf("%f",&vector[i]);
    }

    //proceso
    for(i=0;i<15;i++){
        acum = acum + vector[i]; //sumatoria
        prom = acum/15; //promedio
    }

    //salidas
    printf("La sumatoria de los numeros = %.2f \n",acum);
    printf("El resultado acumulado de multiplicar por 2 = %.2f \n", acum*2);
    printf("El promedio de los numeros es: %.2f", prom);



}//fin de main