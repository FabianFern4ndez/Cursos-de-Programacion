#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>


#define STACKSIZE 10
//vamos a definir una pila de enteros
struct stack
{
	int top;
	int items[STACKSIZE];
};
//funciones auxiliares de la pila: vacia y llena
bool empty(struct stack mi_pila[])
{
	if(mi_pila[0].top == -1)  
	{
		return true;
	}
	else
	{
		return false;
	}

	//se llama a la funcion asi: empty(s)	
}

bool full(struct stack mi_pila[])
{
	if(mi_pila[0].top == STACKSIZE-1)
	{
		return true;
	}
	else
	{
		return false;
	}

}


//funciones principales pop y push

int pop(struct stack mi_pila[])
{
	//verificamos que la pila no este vacia
	if(empty(mi_pila)) //ojo estas funciones aceptan direccion no elemento, me pase como media hora con chatgpt en ese error
	{
		printf("Pila Vacía, Posible Subdesbordamiento\n");
		exit(1);
	}
	//quita el elemento superior
	else
	{
		return mi_pila[0].items[mi_pila[0].top--];
	}
}

void push(struct stack mi_pila[], int x)
{
	if(full(mi_pila)) 
	{
		printf("Pila llena, Posible Desbordamiento");
		exit(1);
	}
	else
	{
		mi_pila[0].items[++(mi_pila[0].top)] = x;
		return;
	}
}


int main()
{
	struct stack mi_pila[1];
	mi_pila[0].top = -1;
	//no necesariamente el struct debe ser un arreglo pero si no hay que trabajar con punteros y me da hueva
   int i = 1, num;

   while(i != 0)
   {
   	printf("1. Mostrar Pilas \n2.Push\n3.Pop\n0.Salir\n");
   	scanf("%d",&i);
   	switch(i)
   	{
   	case 1:
   		printf("\nPila: ");
   		for(int j = 0; j <= mi_pila[0].top ;j++)
   		{
   			printf(" %d | ", mi_pila[0].items[j]);
   		}
   		printf("\n\n");
   	break;
    case 2:
    	printf("Elemento: ");
    	scanf("%d", &num);
    	push(mi_pila, num );
    break;
    case 3:
    	num = pop(mi_pila);
    	printf("Elemento extraido: %d\n", num);
    break;
    default:
    break; 

   	}
   }



}