//gcc selSort.c -o test
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void swap(int arr[], int x, int y)
{
    int temp = arr[y];
    arr[y] = arr[x];
    arr[x] = temp;
}

void mostrar(int a[], int n)
{
    int i = 0;
    while(i<n)
    {
        printf("%d ",a[i]);
        i++;
    }
}

int main()
{
    int lista[MAX];
    int n, i, j, min;
    srand(time(NULL));

    printf("Tamaño del Arreglo: ");
    scanf("%d",&n);
    
    //llenado aleatorio del arreglo
    for(i=0;i<n;i++)
    {
        lista[i] = rand() % 5000;
    }
    printf("Arreglo generado aleatoriamente\n");
    mostrar(lista,n);

    //selection sort
    //vamos a iterar todo el array
    for(i=0;i<n-1;i++)
    {
        //asumimos que el minimo es i
        min = i;

        //a partir del i+1 buscamos el minimo del arreglo
        for(j=i+1;j<n;j++)
        {
            //si lo encuentra, entonces
            if (lista[j] < lista[min])
            {
                min = j; //guardo su ubicacion
            }
            ;
        }
        //cambiamos el valor actual con el minimo
        swap(lista,i,min);

        //se repite para el siguiente i
    }


printf("\n\nArreglo ordenado: \n");
mostrar(lista,n);

}