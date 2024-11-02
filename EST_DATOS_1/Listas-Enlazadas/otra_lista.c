
//terminar funcion insertar_pos

#include<stdio.h>
#include<stdlib.h>
//declaracion
struct lista
{
	int data;
	struct lista *next;
};
typedef struct lista Node;

//crear un nodo
Node* getnode() //notar que el tipo de retorno es un nodo
{
	Node* newnode;
	newnode = (Node*)malloc(sizeof(Node)); //ubica el nuevo nodo en la memoria
	printf("Dato: ");
	scanf("%d", &newnode -> data);
	newnode -> next = NULL;
	return newnode; // 1 data | NULL |
}

void insertar_principio(Node **start)
{
	Node *newnode;
	newnode = getnode();
	if(*start == NULL)// si la lista esta vacia el nuevo nodo es el primero
	{
		*start = newnode; 
	}
	else
	{
		newnode -> next = *start;  //nn: | dato 1 start | -> start : | dato | NULL |
		*start = newnode; 
	}

}
void insertar_final(Node **start)
{
	Node *newnode , *temp;
	newnode = getnode();
	if(*start == NULL)
	{
		*start = newnode;
	}
	else
	{
		temp = *start;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newnode;
	}
	
}

void insertar_pos(Node **start)
{
	Node *newnode, *temp, *prev;
	newnode = getnode();

}

void imprimirLista(Node **start)
{
	if(*start != NULL)
	{
		printf("|%d|%p|->", (*start)->data, (*start)->next);
		imprimirLista(&(*start)->next);
	}
	else
	{
		printf("\n\n");
	}
}

int contarNodos(Node **start)
{
	int i=0;
	Node *temp = *start;
	while(temp !=NULL)
	{
		temp = temp->next;
		i++;
	}
	return i;
}



void menu()
{
	printf("0.Salir\n1.Imprimir\n2.Limpiar\n3.Nuevo Nodo Inicio\n4.Nuevo Nodo Final\n5.Nuevo Nodo en n>0\n6.Contar Nodos\nOperacion:");
}

int main()
{
	Node *start = NULL;
	int choice = 1;
	while(choice != 0)
	{
		menu();
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			imprimirLista(&start);
			break;
		case 2:
			system("clear");
			break;
		case 3:
			insertar_principio(&start);
			break;
		case 4:
			insertar_final(&start);
			break;
		case 6:
			int n = contarNodos(&start);
			printf("La cantidad de Nodos es: %d\n\n", n);
			break;
		
		}

	}
}