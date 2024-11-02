#include<stdio.h>
void prob1(int a[], int j)
{
	if(j>-1)
	{
		prob1(a, j-1);
	}
	
	printf("%d\n",a[j+1]);
}

void prob2(int a[], int j)
{
	if(j>-1)
	{
		prob2(a, j-1);
		printf("%d\n",a[j]);
	}
	
}

void prob3(int a[], int j)
{
	if(j>-1)
	{
		printf("%d\n",a[j]);
		prob3(a, j-1);
		
	}
	
}

int main()
{
	int decision;
	int a[5] = {9,8,7,6,5};
	do{
	printf("Problema 1\nProblema 2\nProblema 3\nOpcion:");
	scanf("%d",&decision);

	switch(decision)
	{
	case 1:
		prob1(a, 3);
		printf("\n");
		break;
	case 2:
		printf("\n");
		prob2(a, 4);
		break;
	case 3:
		prob3(a, 4);
		printf("\n");
		break;
	

	}
    }while(decision != 0);

}