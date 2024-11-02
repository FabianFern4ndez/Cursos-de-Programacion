#include<stdio.h>
/*Prueba de Escritorio
suma(a,0) = a[0] + suma(a, 1)
          = a[0] + a[1] + suma(a,2)
          = a .... + a[4]
*/

//la idea es sumar el primer numero y luego el resto del arreglo
int sumar_arreglo(int a[], int i)
{
	if(i == 4)
	{
		return a[4];
	}
	else
	{
		return a[i] + sumar_arreglo(a, i+1);
	}

}
int main()
{
	int a[] = {1,2,3,4,5}; //suma = 15
	int n = sumar_arreglo(a,0);
	printf("La suma del arreglo es: %d\n", n);

}