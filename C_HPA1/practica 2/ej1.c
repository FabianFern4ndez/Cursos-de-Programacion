/*  1.	Elabore un programa en C que solicite números, el programa debe detenerse 
cuando se ingrese un número negativo y debe presentar la sumatoria y el promedio de los números ingresados.*/

#include<stdio.h> 
int main (){
    //variables
int i = 0; 
float var=0 , sum = 0, prom;
    

    //instrucciones
while (var>=0) {

printf("Ingrese un numero positivo: ");
scanf("%f" ,&var);

if (var>=0){//solo trabaja con positivos
     sum = sum + var;
     i=i+1;
     prom = sum/i ; }  //fin del if
}//fin de ciclo while

printf("La sumatoria de los numeros fue de: %f y el promedio: %f " , sum, prom);
} //fin de programa