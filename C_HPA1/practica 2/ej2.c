/*Escribe un programa en C que solicite 2 valores (el límite inferior y superior) 
que limitan un intervalo. Si el límite inferior es mayor que el superior debe volver a solicitar 
los valores; luego de esta validación, el programa debe permitir ingresar números hasta que se
 introduzcamos el 0. Cuando termine el programa dará las siguientes informaciones:
a.	La suma de los números que están dentro del intervalo.
b.	La cantidad de números ingresados que estaban fuera del intervalo.
c.	Indicar si se ha introducido algún número igual a los límites del intervalo
*/

#include<stdio.h>
int main(){
//variables
float lsup, linf, var, sum=0;
int cont=0, cont2 = 0;


//instrucciones
do {
printf("Indique limite SUPERIOR: ");
scanf("%f", &lsup);
printf("Indique limite INFERIOR: ");
scanf("%f", &linf);

if(linf>lsup){
    printf("OPERACION INVALIDA: El limite inferior es mayor al superior; intente de nuevo \n");
} //fin del if para indicar el problema

} while (linf>lsup);//fin do while y validacion


printf("Escriba los numeros (cero terminará la secuencia) : \n");
while (var != 0){
    scanf("%f", &var);

    if (var<lsup && var>linf){
        sum = sum + var;
    }
    else if (var == lsup || var == linf){ 
            printf("Este numero está en el limite del intervalo \n ");
            cont = cont + 1;
           
             }
             else { cont2 = cont2 + 1;}
    
} //fin de while

//salida
printf("La suma de los números que están dentro del intervalo es : %f \n" , sum);
printf("La cantidad de números ingresados que estaban fuera del intervalo fue de: %d \n " ,cont2);
printf("La cantidad de números ingresados que estaban en el limite fue de: %d \n" ,cont);

}// fin del programa