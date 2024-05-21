/*    Elabore un programa en C que solicite tres notas de un estudiante, 
luego debe calcular la nota promedio e imprimir el resultado en pantalla. */

#include<stdio.h>
void main(){
    //bloque de variables
    float n1, n2, n3;
    float prom;
    //bloque de instrucciones
    printf("Escriba la primera nota: ");
    scanf("%f" ,&n1);
    printf("Escriba la segunda nota: ");
    scanf("%f" ,&n2);
    printf("Escriba la tercera nota: ");
    scanf("%f" ,&n3);
    //proceso
    prom = (n1+n2+n3)/3;
    //salida
    printf("La nota promedio es: %.1f" ,prom);

}