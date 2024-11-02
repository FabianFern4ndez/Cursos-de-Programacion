#include<stdio.h>
#include<stdbool.h>
void mostrar(int arreglo[], int tamaño)
{
    for(int i=0;i<tamaño;i++)
    {
        printf("%d |", arreglo[i]);
    }
}

void convArrToSet(int vector[], int* tamaño)
{
	           
	int i,j, n = (*tamaño); 

	//algoritmo burbuja modificado para eliminar duplicados
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(vector[i] == vector[j])
			{
				int temp = vector[n-1];
				vector[n-1] = vector[j];
				vector[j] = temp;
				//diminuyo el indice
				n--;
				j--; //que vuelva a revisar;
			}
		}
	}
	(*tamaño) = n;

   //algoritmo de ordenamiento
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
}



int main()
{
	int nA, nB;
	printf("Indique el tamaño del Conjunto A: ");
	scanf("%d", &nA);
	//declaracion tardia del arreglo
	int A[nA];
	printf("Indique el tamaño del Conjunto B: ");
	scanf("%d", &nB);
	//declaracion tardia del arreglo
	int B[nB];

	//llenado de elementos de A
	printf("\nPara el conjunto A:\n");
	for(int i = 0; i<nA ; i++)
	{
		printf("Elemento %d: " ,i+1);
		scanf("%d", &A[i]);
	}
	printf("\nPara el conjunto B:\n");
	for(int i = 0; i<nB ; i++)
	{
		printf("Elemento %d: " ,i+1);
		scanf("%d", &B[i]);
	}

	//conversion de arreglos a conjuntos (ordenamiento y elminacion de repeticion)
	convArrToSet(A, &nA);
	convArrToSet(B, &nB);

	//imprimo los arreglos, ahora conjuntos
	mostrar(A,nA);
	printf("\n");
	mostrar(B,nB);
 


}