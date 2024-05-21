/*
Elabore un programa que almacene en un arreglo las edades y el genero de 25 participantes
en una encuesta. Con esta informacion se desea realizar un estudio estadistico sobre el
comportamiento de esta poblacion.EL programa debe determinar la siguiente informacion
edad y genero del participante mas joven
edad y genero del participante mas adulto
edad promedio de los participantes
cantidad de participantes mayores de treinta años
cantidad de participantes menores de edad
bonus: la cantidad de participantes jubilados 57 y 62

nota: al parecer la profesora quiere que ingrese la entrada en un for y los 
procesos en otro for ._. buenas practicas
*/

#include<stdio.h>
int main(){
    //variables
    int edad[25];
    char genero[25];
    int i;

    //entradas
    for(i=0;i<25;i++){
        printf("Ingrese la edad del participante %d.: ", i+1);
        scanf("%d",&edad[i]);
        printf("Ingrese el genero del participante %d.: ",i+1);
        scanf(" %c",genero[i]);
        printf(" %c", genero[i]); //segmentation fault no se :(
    } 



}//fin de main