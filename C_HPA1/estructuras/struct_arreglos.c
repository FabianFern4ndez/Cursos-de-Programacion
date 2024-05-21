#include<stdio.h>

struct estudiantes
{
    //por cierto estas cosas se llaman atributos, pero no almacenan los valores
    char nombre[15], telef[9], cedula[9], genero, letra;
    int edad, notas;
    //la variable que almacena valores es la que se declara en la funcion
};

char detNota(struct estudiantes est[])
{
    int i;
    for(i=0;i<5;i++)
    { 
     if(est[i].notas >= 91)
    {
        est[i].letra = 'A';
    }
    if(est[i].notas >= 81)
    {
        est[i].letra = 'B';
    }
    if(est[i].notas >= 71)
    {
        est[i].letra = 'C';
    }
    if(est[i].notas >= 61)
    {
        est[i].letra = 'D';
    }
    }
}

int main()
{
    int i;
    struct estudiantes est[5]; //declaracion
     //entradas
    for(i=0;i<5;i++)
    {
        printf("Estudiante %d\n", i+1);
        printf("Nombre: ");
        scanf("%s",&est[i].nombre);
        printf("Nota: ");
        scanf("%d", &est[i].notas);
    }
    //procesos
    detNota(est);
    //salidas
    for(i=0;i<5;i++)
    {
        printf("\nEstudiante %d\n", i+1);
        printf("Nombre: %s\n", est[i].nombre);
        printf("Nota: %d\n", est[i].notas);
        printf("Letra: %c\n",est[i].letra);
    }

}