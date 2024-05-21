#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100


struct paciente_datos //completa
{
    char nombre[15];
    char apellido[15];
    char cedula[12];
    int edad;
    char genero;
    int fecha_nacimiento;
};

struct paciente_registro_medico //falta
{


};
/*el problema de esta funcion es que los datos se guardan siempre
en el mismo lugar por tanto se reescriben y se borran*/

/*no se si los datos se guardan en el struct o se estan borrando
si se guardan esta funcion esta lista*/

/*si las está guardando :)*/
void registrarPaciente(struct paciente_datos paciente[], int*cont_pacientes)
{
    printf("\n");
    //variables
    int i, num;  
    //entradas
    printf("Cuantos pacientes desea registrar: ");
    scanf("%d", &num);
        /*creo que con esto se arregla el problema de sobreescritura*/
    
    for(i=(*cont_pacientes); i < (num +(*cont_pacientes));i++)
    {
       printf("\nIngrese SOLO el nombre del paciente: ");
       scanf("%s", paciente[i].nombre);
       printf("Registrado: %s\n", paciente[i].nombre);

       printf("\nApellido: ");
       scanf("%s", paciente[i].apellido);
       printf("Registrado: %s\n", paciente[i].apellido);
    
       printf("\nCedula: ");
       scanf("%s", paciente[i].cedula);
       printf("Registrado: %s\n", paciente[i].cedula);

       printf("\nEdad: ");
       scanf("%d", &paciente[i].edad);
       printf("Registrado: %d\n", paciente[i].edad);

       printf("\nGenero, (f) para femenino (m) masculino: ");
       scanf(" %c", &paciente[i].genero);
       tolower(paciente[i].genero);
       printf("Registrado: %c\n", paciente[i].genero);

       printf("Fecha de nacimiento: ");
       scanf("%d",&paciente[i].fecha_nacimiento);
       printf("Registrado: %d\n", paciente[i].fecha_nacimiento);

    }   
     (*cont_pacientes)= i;    
    printf("\n");
}

void imprimirExpediente(struct paciente_datos paciente[])
{
    char cedula[12];
    int i;
    printf("Cedula del paciente: ");
    scanf("%s",cedula);


    for(i=0;i<MAX;i++)
    {
        if(strcmp(cedula, paciente[i].cedula)==0) //funcion de comparacion de strings
        {
            printf("Paciente %d\n", i+1);
            printf("Nombre: %s\n", paciente[i].nombre);
            printf("Apellido: %s\n", paciente[i].apellido);
            printf("Cedula: %s\n", paciente[i].cedula);
            printf("Edad: %d\n", paciente[i].edad);
            if(paciente[i].genero == 'f')
            {
                printf("Genero: Femenino\n");
            }
            if(paciente[i].genero == 'm')
            {
                printf("Genero: Masculino\n");
            }
        }
    }
    if(strcmp(cedula, paciente[i].cedula)==0)
    {
        printf("Cedula no encontrada\n");
    }
    printf("\n");
}

void imprimirTodosExpedientes(struct paciente_datos paciente[], int *contador)
{
    //variables
    int i;
    //instrucciones
        for(i=0; i<(*contador); i++)
        {
            printf("Paciente %d\n", i+1);
            printf("Nombre: %s\n", paciente[i].nombre);
            printf("Apellido: %s\n", paciente[i].apellido);
            printf("Cedula: %s\n", paciente[i].cedula);
            printf("Edad: %d\n", paciente[i].edad);
            if(paciente[i].genero == 'f')
            {
                printf("Genero: Femenino\n");
            }
            if(paciente[i].genero == 'm')
            {
                printf("Genero: Masculino\n");
            }
            printf("\n");
            
        }
        printf("\n");
}



int main()
{
    //variables
    struct paciente_datos paciente[MAX];
    int decision = 1;
    int cont_pacientes=0;
  


    //menu
    while(decision != 0)
    {
    printf("Bienvenido a  GMHealth\n");
    printf("\nPacientes Registrados: %d \n\n", cont_pacientes);
    printf("Selecciona una opcion\n");
    printf("0. Salir\n");
    printf("1. Registrar nuevo paciente\n");
    printf("2. Medir IMC\n");
    printf("3. Medir Presión Arterial\n");
    printf("4. Medir Glucosa\n");
    printf("5. Imprimir expediente de paciente\n");
    printf("6. Mostrar información de todos los pacientes\n");
    printf("Numero: ");
    scanf("%d",&decision);

    switch(decision)
    {
        case 1: 
        registrarPaciente(paciente, &cont_pacientes);
        break;
        case 2:
        //funcion
        break;
        case 3:
        //funcion
        break;
        case 4:
        //funcion
        break;
        case 5:
        imprimirExpediente(paciente);
        /*en las funciones de impresión faltan los reportes de imc
        porque no se han creado las funciones*/
        break;
        case 6:
        imprimirTodosExpedientes(paciente, &cont_pacientes);
        break;
    }
    } //fin de while
    
}