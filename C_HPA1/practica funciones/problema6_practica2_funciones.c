/*6.Elabore un programa que permita calcular el factorial de un número ingresado por el usuario. 
En términos matemáticos, un factorial es el producto de todos los números enteros positivos de 1 a n*/

#include<stdio.h>
int calcularFactorial(int var){
    int factorial=1, i;

     for (i=var ; i >= 1; i-- ){
        factorial = factorial * i;
    }//fin de for
    return factorial;
}//fin de la funcion

int main(){
    //variables
    int var;
    //instrucciones
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &var);
   
    //salidas
    printf("El factorial de %d es %d " ,var, calcularFactorial(var));


}//fin de main