#include<stdio.h>
// 1 1 2 3 5 8 13 21
int fib(int n)
{
	//caso base
	if(n<1)
	{
		return 0;
	}
	if(n == 1)
	{
       return 1;
	}
	//recursion
	else
	{
		return fib(n-1) + fib(n-2);
	}

}
int main()
{
	int n;
	printf("Posicion: ");
	scanf("%d",&n);
	n = fib(n);
	printf("Resultado: %d\n",n);

}