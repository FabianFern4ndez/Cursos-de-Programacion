//gcc bubbleSort.c -o test
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void mostrar(int arreglo[], int tamaño)
{
    for(int i=0;i<tamaño;i++)
    {
        printf("%d ", arreglo[i]);
    }
}

int main()
{
    int i,j,n,vector[MAX];
    srand(time(NULL));

    printf("Tamaño del arreglo: ");
    scanf("%d", &n);

    //lleno el arreglo
    for(i=0;i<n;i++)
    {
        vector[i] = rand() % 4000;
    }
    
    printf("Arreglo desordenado: \n");
    mostrar(vector,n);

    //bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            //compara el valor de j con cada valor de j+1
            if(vector[j]>vector[j+1])
            {
                //intercambio
                int temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }

    printf("\n\nArreglo ordenado: \n");
    mostrar(vector,n);


}