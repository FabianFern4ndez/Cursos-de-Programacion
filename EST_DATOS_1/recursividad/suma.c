#include<stdio.h>
/* Prediccion
suma(4,0) : a = 4, n = 0 => n = 4 sumar(4-1, 4)
suma(3,4) => n = 3 + 4 = 7 sumar(3-1, 7)
suma(2,7) => n = 2 + 7 = 9 sumar (2-1, 9)
suma(1,9) => n = 1 + 9 = 10 sumar(1-1, 10);
sumar(0,10) //fin de recursion
Regreso en la pila (Impresion)
//no entra
10 impreso por suma(1,9)
9                  (2,7)
7                  (3,4)
4                   (4,0)
*/
void sumar(int a, int n)
{
	if(a>0)
	{
		n = a + n;
		sumar(a-1, n);
		printf("Valor de n: %d\n", n);
	}
}
int main()
{
	sumar(4,0);

}