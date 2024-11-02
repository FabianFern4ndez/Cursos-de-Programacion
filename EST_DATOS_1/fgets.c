#include<stdio.h>

int main()
{
    char cadena[100];
    printf("Cadena: ");
    fgets(cadena, 100, stdin);

    printf("Cadena: %s", cadena);

}