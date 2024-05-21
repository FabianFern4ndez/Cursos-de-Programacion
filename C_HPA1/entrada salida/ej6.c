/*    Elabore un programa en C que le solicite al usuario ingresar 2 números enteros,
 el primero debe ser de una cifra y el segundo debe ser de 2 cifras o más. 
 El programa debe determinar si el valor de 2 cifras o más, es o no múltiplo del
  otro valor ingresado. Debe mostrar la salida de la siguiente manera “El número
 ___ es múltiplo de ___” o “El número ___ no es múltiplo de ___”. */

 #include<stdio.h>
 void main(){
    //bloque de variables
    int num1, num2;
    float comp;
    //bloque de instrucciones
    printf("Ingrese un numero entero de una cifra: ");
    scanf("%d", &num1);
    printf("Ingrese un numero entero de 2 cifras o más: ");
    scanf("%d", &num2);
    //proceso
    comp = num2%num1;
    //salida
    if(comp == 0){
        printf("El número %d es múltiplo de %d \n", num2, num1);
       }
     else {
         printf("El número %d no es múltiplo de %d \n", num2, num1);
    }
   

 }