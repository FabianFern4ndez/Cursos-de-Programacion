//gcc ordenamiento.c -o test
#include<stdio.h>
#include<stdbool.h>
void imprimirArreglo(int a[], int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
}

int busquedaBinaria(int a[], int tamaño, int busqueda, int*contador)
{
    int indice_inicial=0, indice_final=tamaño-1, mitad;
    (*contador) = 0;

    //condicion de iteracion
    while(indice_inicial<=indice_final)
    {
        mitad = (indice_final+indice_inicial)/2;
         (*contador)++;

        //si el elemento buscado está en la mitad
        if(busqueda == a[mitad])
        {
            return mitad;
        }
        //en caso de que el elemento del medio sea mayor
        if(busqueda < a[mitad])
        {
            indice_final = mitad - 1; 
            /*
            Esta condicion elimina todos los elementos menores
            al cambiar el indice final a la posicion anterior a la mitad
            */
        }
        //si el elemento del medio es menor
        else
        {
            indice_inicial = mitad + 1;
            /*
            Esta condicion elimina todos los elementos mayores
            al cambiar el indice inicial a la posicion siguiente a la mitad
            */
        }
       

    }

    //si no encontramos el numero
    return(-1);

}

int busquedaSecuencial(int a[], int tamaño, int busqueda, int *contador)
{
    (*contador) = 0;
    int i;
    //iteramos el arreglo
    for(i=0;i<tamaño;i++)
    {
        (*contador)++;
        //si encontramos el numero, devuelvo el indice
        if(a[i] == busqueda)
        {
            return i;
        }

    }
    //si no lo encontramos
    return -1;
}

int main()
{
    //variables
    int contador_en_funciones;
    int decision;
    int vector[5];
    int i;
    bool intercambiado = true;
    int temporal;
    int contador_de_pasadas=0;
    int indice, busqueda;


    //llenado del arreglo
    printf("LLenado del arreglo\n\n");
    for(i=0;i<5;i++)
    {
        printf("Ingrese el valor  %d: ", i+1);
        scanf("%d",&vector[i]);
    }

    //muestra el arreglo inicial
    printf("\nArreglo Inicial: \n");
    imprimirArreglo(vector,5);


    //menu
    do{
    printf("\n\nQue operacion desea realizar:\n");
    printf("0. Salir\n");
    printf("1. Ordenar\n");
    printf("2. Busqueda binaria y secuencial\n\n::");
    scanf("%d",&decision);
   

    switch(decision)
    {
        case 1:
        //ordenamiento
    while(intercambiado)
    {
        intercambiado = false;
        for(i=0;i<5-1;i++)
        {
            if(vector[i] > vector[i+1])
            {
                //realizar intercambio
                temporal = vector[i];
                vector[i] = vector[i+1];
                vector[i+1] = temporal;
                intercambiado = true;
            }
        }
        contador_de_pasadas++;
        printf("\n\nArreglo en la vuelta %d:  \n",contador_de_pasadas);
        imprimirArreglo(vector,5);

    }
    printf("\n");
        break;

    //busqueda secuencial
    case 2:
    printf("Que elemento desea buscar: ");
    scanf("%d",&busqueda);
    printf("\n");
    printf("\nPor busqueda secuencial\n");
    indice = busquedaSecuencial(vector,5,busqueda,&contador_en_funciones);
    //salidas
    
     if(indice != -1)
    {
        printf("El elemento %d ha sido encontrado en la posición %d \n",busqueda,indice+1);
    }
    else
    {
        printf("El elemento %d no ha sido encontrado en el arreglo\n",busqueda);
    }
    
    printf("El algoritmo ha tardado %d iteraciones\n\n", contador_en_funciones);

    printf("\n\nPor busqueda binaria\n");
    indice = busquedaBinaria(vector,5,busqueda,&contador_en_funciones);

    //salidas
    if(indice != -1)
    {
        printf("El elemento %d ha sido encontrado en la posición %d \n",busqueda,indice+1);
    }
    else
    {
        printf("El elemento %d no ha sido encontrado en el arreglo\n",busqueda);
    }
    
    printf("El algoritmo ha tardado %d iteraciones\n\n", contador_en_funciones); 
    break;

    
    }//fin del switch


    }while(decision > 0);
  

    

}