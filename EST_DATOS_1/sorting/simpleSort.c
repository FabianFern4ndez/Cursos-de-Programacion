//gcc simpleSort.c -o test
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main()
{
    int arr[MAX];
    int n;
    int i,j;
    int temp;

    printf("Tamaño del arreglo: ");
    scanf("%d",&n);

    //llenado aleatorio del arreglo
    for(i=0;i<n;i++)
    {
        arr[i] = rand() % 5000;
    }

    //imprimimos el arreglo generado
    printf("Arreglo aleatorio generado\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    //ordenamiento
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }

        }
    }

    //imprimimos el arreglo ordenado
   printf("Arreglo ordenado\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}