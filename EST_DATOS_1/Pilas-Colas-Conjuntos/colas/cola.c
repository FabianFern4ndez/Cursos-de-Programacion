/*
Indice
1. Estructura de Cola
2. Funciones de Cola simple
3. Funciones de Cola circular (se usa la misma struct de cola simple, solo cambian las fuciones)
4. Main de prueba
*/


#include<stdio.h>
#define MAXCOLA 5
struct cola
{
	int final;
	int frente;
	int elementos[MAXCOLA];
};

//funciones cola simple
void insertar(struct cola mi_cola[], int dato)
{
	if(mi_cola[0].final < MAXCOLA -1)
	{
		mi_cola[0].final++;
		mi_cola[0].elementos[mi_cola[0].final] = dato;
		if(mi_cola[0].final == 0) { mi_cola[0].frente = 0; }
	}
    else
    {
    	printf("Desbordamiento\n");
    }
}

int eliminar(struct cola mi_cola[])
{
	if(mi_cola[0].frente != -1)
	{
		//si tiro el return aqui cierra la funcion y no sirve, este dato temporal me permito usar el return de forma tardia
		int temp = mi_cola[0].frente;
		//return cola[frente]
		if(mi_cola[0].frente == mi_cola[0].final)
		{
			mi_cola[0].frente = -1;
			mi_cola[0].final = -1;
		}
		else
		{
		mi_cola[0].frente = mi_cola[0].frente + 1 ;
	    }

	//al final de esos calculos va el return
		return mi_cola[0].elementos[temp];
	}
	else
	{
		printf("Subdesbordamiento\n");
	}

}

//funciones de cola circular
void insertar_circular(struct cola mi_cola[], int dato)
{
	if( ((mi_cola[0].final == MAXCOLA -1) && (mi_cola[0].frente == 0))  || (mi_cola[0].final + 1 == mi_cola[0].frente) )
	{
		printf("Desbordamiento Cola LLena \n");
	}
	else
	{
		if(mi_cola[0].final == MAXCOLA - 1 )
		{
			mi_cola[0].final = 0;
		}
		else
		{
			mi_cola[0].final = mi_cola[0].final + 1;
		}
		mi_cola[0].elementos[mi_cola[0].final] = dato;

		if(mi_cola[0].frente == -1)
		{
			mi_cola[0].frente = 0;
		}
	}
}

int eliminar_circular(struct cola mi_cola[])
{
	int temp;
	if(mi_cola[0].frente == -1)
	{
		printf("Subdesbordamiento - Cola Vacia \n");
	}
	else
	{
		temp = mi_cola[0].frente;
		if(mi_cola[0].frente == mi_cola[0].final)
		{
			mi_cola[0].frente = -1;
			mi_cola[0].final = -1;
		}
		else
		{
			if(mi_cola[0].frente == MAXCOLA - 1)
			{
				mi_cola[0].frente = 0;
			}
			else
			{
				mi_cola[0].frente = mi_cola[0].frente +1;
			}
		}
	}

	return mi_cola[0].elementos[temp];
}






int main()
{
	struct cola mi_cola[1];
	//defino que mi cola al principio está vacía
	mi_cola[0].final = -1;
	mi_cola[0].frente = -1;







	//vamos a probar la cola
	int salir = 1;
	int hola;
	int a;
	int i;

	//para probar
	while(salir != 0)
	{
		printf("Numero: ");
		scanf("%d",&hola);
		if(hola == 1)
		{
			salir++;
			insertar(mi_cola, salir );
		}
		if(hola == 2)
		{
			a = eliminar(mi_cola);
			printf("Eliminado %d\n",a);
		}
		if(hola == 3)
		{
			printf("ELementos de la cola\n");
			for(i= mi_cola[0].frente ;i<=mi_cola[0].final;i++)
			{
				printf(" %d ", mi_cola[0].elementos[i]);

			}
			printf("\n");
				printf("Frente: %d\n", mi_cola[0].frente);
				printf("Final: %d\n",mi_cola[0].final);
				printf("\n");
		}
		if(hola == 4)
		{
			salir++;
			insertar_circular(mi_cola, salir );
		}
		if(hola == 5)
		{
			a = eliminar(mi_cola);
			printf("Eliminado %d\n",a);
		}

	}

}