/*
A partir de un pila simular las siguientes cadenas y decir si son validas o no
1. (A+B})
2. {[A+B] - [(C-D)]
3. (A+B) - {C+D} - [F + G]
4. ((H) * {([J + K])})
5. (((A)))
*/ 

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define MAX 100
//definimos la estrucrutra de pila
struct stack
{
	int top;
	int items[MAX];
};
//funciones de la pila
bool empty(struct stack pila[])
{
	if(pila[0].top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool full(struct stack pila[])
{
	if(pila[0].top == MAX - 1 )
	{
		return true;
	}
	else
	{
		return false;
	}
}
void push(struct stack pila[], char item)
{
	if(full(pila))
	{
		printf("Stack Overflow :)");
		return; 
	}
	else
	{
		pila[0].items[++(pila[0].top)] = item;
		return;
	}
}

char pop(struct stack pila[])
{
	if(empty(pila))
	{
		printf("Stack Overflow");
		return 'a';
	}
	else
	{
		return (pila[0].items[pila[0].top--]);
	}
}


int main()
{
	//declaracion de pila y tope
	struct stack pila[1];
	pila[0].top = -1;
	//definicion de las cadenas
	char A[] =  "(((A)))";   // "(A+B})";
	char B[] = "{[A+B] - [(C-D)]";
	char C[] = "(A+B) - {C+D} - [F + G]";
	char D[] = "((H) * {([J + K])})";
	char E[] = "(((A)))";

	//algoritmo
	bool valid = true; //asumamos que la cadena es valida
	int n = strlen(A);

	for(int i=0;i<n;i++) //iteramos toda la cadena
	{
		//los simbolos de apertura se apilan sin restriccion
		if(A[i] == '(' || A[i] == '[' || A[i] == '{'  )
		{
			push(pila,A[i]);
		}
         //caso para simbolos de cierre
		if(A[i] == ')' || A[i] == '}' || A[i] == ']'  )
		{
			if(empty(pila))
			{
				valid = false; 
			}
			else
			{
				int temp = pop(pila);
				//casos de equivalencia
				if(temp == '(' && A[i] != ')')
				{
					valid = false;
				}
				if(temp == '{' && A[i] != '}')
				{
					valid = false;
				}
				if(temp == '[' && A[i] != ']')
				{
					valid = false;
				}
			}

		}

	} // fin del for

	//output
	if(valid)
	{
		printf("La cadena es valida\n");
	}
	else
	{
		printf("La cadena es invalida");
	}

}

