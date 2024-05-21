#include<stdio.h>
void holaMundo(){
    printf("Hola Mundo \n");
    //funcion sin parametros que no retorna valor
}

int sumaDosEnteros(int a, int b){
    //acepta parametros a, b que no tienen que tener el mismo nombre que en main
    int resultado;
    resultado = a + b; //operacion

    return resultado; //retorno de valor de variable resultado
}


int factorial( int num )    //funcion recursiva //no me salio :(
{
    if  ( num > 0 ) {
        return( num * factorial( num - 1 ) );
        }
}


int main(void){
    int num1, num2, num3;
    int control;
    int var, resultado;
    holaMundo();
    printf("1. Ingrese un entero: ");
    scanf("%d", &num1);
    printf("2. Ingrese un entero: ");
    scanf("%d", &num2);
    printf("3. Ingrese un entero: ");
    scanf("%d", &num3);

    printf("El resultado de la suma 1 y 2 es: %d ", sumaDosEnteros(num1, num2) );
//nota, cuando invocas la funcion los parametros deben tener el nombre de variable de lo que se vaya a ejecutar
    printf("\nEl resultado de la suma 2 y 3 es: %d ", sumaDosEnteros(num2, num3) );

    printf("\nIntento de recursividad (pulse 1 para entrar 0 para saltar): ");
    scanf("%d", &control);
    if (control == 1){
        printf("Factorial de: ");
        scanf("%d", &var);
        resultado = factorial(var);
        printf("Resultado : %d ",resultado );
    }


}//fin de main

