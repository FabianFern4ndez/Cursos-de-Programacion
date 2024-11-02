//gcc insertionSort.c -o test
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void mostrar(int lista[], int tamaño)
{
    for(int i=0;i<tamaño;i++)
    {
        printf("%d ",lista[i]);
    }
}

int main()
{
    int lista[MAX];
    int i, j, n, temp, key;
    srand(time(NULL));

    printf("Insertion Sort\n\n");
    printf("Tamaño del vector: ");
    scanf("%d",&n);

    //llenado aleatorio
    for(i=0;i<n;i++)
    {
        lista[i] = rand() % 5000;
    }
    printf("Lista aleatoria: \n");
    mostrar(lista,n);

    //insertion Sort
    //empezamos desde el segundo elemento
    for(i=1; i<n; i++)
    {
        //la llave es el elemento en la posicion actual
        key = lista[i];
        //j el elemento anterior a la llave
        j = i-1;
        
        //si el elemento anterior a la llave es mayor
        while(j>=0 && lista[j]>key)
        {
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = key;

    }

    printf("\n\nArreglo Ordenado: \n");
    mostrar(lista,n);
}