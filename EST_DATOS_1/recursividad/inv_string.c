#include <stdio.h>
#include <string.h>

void invertir(char cadena[], char invertida[], int tamaño, int indice)
{
	if(tamaño == 0)
	{
		invertida[indice] = '\0'; // Agregar el carácter nulo al final de la cadena invertida
	}
	else
	{
		invertida[indice] = cadena[tamaño - 1]; // Copiar el carácter desde cadena al final de invertida
		invertir(cadena, invertida, tamaño - 1, indice + 1); // Llamar recursivamente con tamaño reducido y avanzando al siguiente índice
	}
}

int main()
{
	char cadena[] = "Fabian Fernandez";
	int n = strlen(cadena);
	char invertida[n + 1]; // +1 para el carácter nulo al final
	invertir(cadena, invertida, n, 0); // Comenzar desde el índice 0
	printf("%s\n", invertida);

}