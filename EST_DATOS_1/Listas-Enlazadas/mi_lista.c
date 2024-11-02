#include <stdio.h>
#include<stdlib.h>
struct ListaEnlazada
{
	int datos;
	struct ListaEnlazada *sig;
};
typedef struct ListaEnlazada *Nodo; //crear el tipo de dato nodo puntero , evita trabajar con mas punteros


void nuevoNodo(Nodo *inicial, int n)
{
	Nodo nuevo;
	nuevo = malloc(sizeof(struct ListaEnlazada)); //reservo espacio para el nodo
	nuevo -> datos = n; //asigno el dato
	nuevo -> sig = (*inicial);  //enlace
	(*inicial) = nuevo; //mi nuevo nodo pasa a ser el inicio
}

void imprimirLista(Nodo inicial)
{
	if(inicial != NULL)
	{
		printf("|%d|%p|->", inicial -> datos, inicial -> sig);
		imprimirLista(inicial -> sig);
	}
	else
	{
		printf("\n\n");
	}

	/* iterativo
	Nodo temporal = inicial;
	printf("\n");
	while(temporal != NULL)
	{
		
		temporal = temporal -> sig;
	}
	printf("\n");
	*/
}



void menu()
{
	printf("0.Salir\n1.Nuevo Nodo Inicio\n2.Nuevo Nodo Final \n3.Imprimir\nOperacion:");
}



int main()
{
	Nodo inicial = NULL; //apuntador que señala el primer nodo de la lista, NULL = sin nodos


	int choice=1;
	int n;
	while(choice != 0)
	{
		menu();
		scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			printf("Valor: ");
			scanf("%d",&n);
			nuevoNodo(&inicial, n);
			printf("\n");
			break;
		case 3:
			imprimirLista(inicial);

			break;
		}

	}

}