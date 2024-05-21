/* 3.	Elabore un programa en C que permita ingresar letras, el programa debe 
imprimir dependiendo del caso:
a.	Vocal Abierta
b.	Vocal Cerrada
c.	Consonante
El programa termina únicamente, cuando el usuario introduce el carácter ‘=’. */

#include<stdio.h>
#include<ctype.h>
int main(){
    //variables
    char letra, control;
    control = ' ';

    //instrucciones
    while (control != '='){
        printf("Ingrese una letra: ");
        scanf(" %c", &letra); //ojo con el espacio antes del %c
        letra = tolower(letra);
        if(letra == 'a' || letra == 'e' || letra == 'o'){
            printf("%c es una vocal abierta \n",letra); }
            else if(letra == 'i' || letra == 'u'){
                printf("%c es una vocal cerrada \n",letra); }
                
                else {printf("%c es una consonante \n",letra);}
    } //fin del while

}//fin de main

/*El problema que estás experimentando se debe a que cuando ingresas una letra seguida de 
la tecla "Enter", el carácter de salto de línea ('\n') se almacena en el búfer de entrada del teclado. 
En la siguiente iteración del bucle while, scanf lee ese carácter de salto de línea y lo considera como 
entrada, lo que lleva a un comportamiento inesperado.
Puedes solucionar este problema modificando el scanf para leer solo un carácter y luego agregar un 
espacio en blanco antes del formato %c para eliminar cualquier carácter de espacio en blanco o salto de 
línea en el búfer de entrada. Aquí tienes la modificación:*/