/*    Elabore un programa en C que, a partir de proporcionar la velocidad de un automóvil,
 expresada en Km/h, imprima su equivalente en m/s. */
 
 #include<stdio.h>
 void main(){
    //bloque de variables
    float vel;
    //bloque de instrucciones
    printf("Escriba la velocidad del automóvil en km/h: ");
    scanf("%f",&vel);
    //proceso
    vel = (vel*1000)/3600;
    //salida
    printf("La velocidad del automóvil en m/s es de: %.4f \n", vel);
 }