//gcc selectionSort.c -o test
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int locOfSmallest(int a[], int inicio, int final)
{
    int i = inicio;
    int j = i;
    while(i<=final)
    {
        if (a[i]<a[j])
        {
            j=i;
        }
        i++;
    }
    return j;
}

void selSort(int a[], int n/*tamaño_array*/)
{
    int i=0;
    while(i<n-1)
    {
        int j = locOfSmallest(a, i , n-1);
        swap(a,i,j);
        i++;
    }
}

void display(int a[], int n)
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
    int i;
    int tamaño_array;
    int n=10;
    int arr[n];

        //llenado aleatorio del arreglo
    for(i=0;i<n;i++)
    {
        arr[i] = rand() % 5000;
    }

    /*para calcular el tamaño del array en caso de que no lo sepamos
    tamaño_array = sizeof(arr)/sizeof(int);
    */
   printf("Arreglo aleatorio: \n");
   display(arr, n);
   selSort(arr,n);
   printf("\n\nArreglo ordenado: \n");
   display(arr,n);

    
  
}
