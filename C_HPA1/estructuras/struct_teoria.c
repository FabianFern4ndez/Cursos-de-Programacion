#include<stdio.h>

struct estudiantes
{
    char nombre[15], telef[9], cedula[9], genero, letra;
    int edad, notas;
};

int main()
{
    //variables
    struct estudiantes est1, est2; //formato de declaracion

    //entradas
    printf("Introduzca su nombre: ");
    scanf("%s",&est1.nombre);
    printf("Introduzca su edad: ");
    scanf("%d", &est1.edad);
    printf("Introduzca el genero: ");
    scanf(" %c",&est1.genero);
    printf("estudiante 2\n");
    printf("Introduzca su nombre: ");
    scanf("%s",&est2.nombre);
    printf("Introduzca su edad: ");
    scanf("%d", &est2.edad);
    printf("Introduzca el genero: ");
    scanf(" %c",&est2.genero);

    //procesos
    if(est1.notas >= 91)
    {
        est1.letra = 'A';
    }
    if(est1.notas >= 81)
    {
        est1.letra = 'B';
    }
    if(est1.notas >= 71)
    {
        est1.letra = 'C';
    }
    if(est1.notas >= 61)
    {
        est1.letra = 'D';
    }
    
    


    //salidas
    printf("\nEstudiante 1\n");
    printf("Nombre: %s\n", est1.nombre);
    printf("Edad: %d\n", est1.edad);
    printf("Genero: %c\n", est1.genero);
    printf("\nEstudiante 2\n");
    printf("Nombre: %s\n", est2.nombre);
    printf("Edad: %d\n", est2.edad);
    printf("Genero: %c\n", est2.genero);

}


