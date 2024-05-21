     #include<stdio.h>
     #include<string.h>
     #include<ctype.h>
     #include<stdlib.h>
     #define MAX 100

    struct fecha
    {
        int dia, mes, año;
    };

    struct paciente_datos
    {
        char nombre[15], apellido[15], cedula[12], genero[15];
        int edad;
        struct fecha fecha_nacimiento;
    };

    struct paciente_registro_medico { 
           float Glucosa;
           char status[20];
    };

    void registrarPaciente(struct paciente_datos paciente[], int*cont_pacientes) {
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

       printf("Fecha de nacimiento (dd/mm/yyyy): "); //fechas modificadas
       scanf("%d/%d/%d", &paciente[i].fecha_nacimiento.dia, &paciente[i].fecha_nacimiento.mes,  &paciente[i].fecha_nacimiento.año);
       printf("Fecha de nacimiento: %02d/%02d/%d\n", paciente[i].fecha_nacimiento.dia, paciente[i].fecha_nacimiento.mes, paciente[i].fecha_nacimiento.año);

    }   
     (*cont_pacientes)=i;    
    printf("\n");
}

int findPatient(struct paciente_datos paciente[], int contador, const char cedula[]){
    for (int i=0; i<contador; i++){
        if (strcmp(cedula, paciente[i].cedula) == 0){
            return i; //Se encuentra el paciente, 
        }
    }
    return -1;//el paciente no fue encontrado
}



/*
    void medirGlucosa(struct paciente_datos paciente[], struct paciente_registro_medico registro_medico[], int *cont_pacientes){
      
      char cedula[12];
      int index;
      float nivel_glucosa;

      printf("cedula de identidad del paciente:  ");
      scanf("%s",cedula);
      index = findPatient(paciente, *cont_pacientes, cedula);

      if(index!= -1){
        printf("paciente %d encontrado. \n",index+1);
        printf("ingrese el nivel de glucosa del paciente en mgg/dl:  ");
        scanf("%f", &nivel_glucosa);
        printf("el nivel de glucosa del paciente %d ed %.2f por lo tanto pertenece a la categoria:  ", index+1, nivel_glucosa);
        if (nivel_glucosa<100){
            printf("normal\n");
        }
        else if(nivel_glucosa>=100 && nivel_glucosa <= 126){
            printf("pre-diabetico\n");
        }
        else{
            printf("diabetico\n");
        }
               // Aqui se almacenaria los datos 
        registro_medico[index].Glucosa= nivel_glucosa;
        strcpy(registro_medico[index].status, "Estatus"); 
        if (index+1>*cont_pacientes) {
            *cont_pacientes = index + 1;
        }
    }
    else {
        printf("Paciente no encontrado. Redirigiendo a la opción de registrar nuevo paciente.\n");
        registrarPaciente(paciente, cont_pacientes);
    }
    printf("\n");
      }
     */







     int main()
{
    //Variables
    struct paciente_datos paciente[MAX];
    struct paciente_registro_medico registro_medico[MAX];
    int decision=1;
    int cont_pacientes=0;
  
    //Menu
    while(decision!=0)
    {
    printf("Bienvenido a  GMHealth\n");
    printf("\nPacientes Registrados: %d \n\n", cont_pacientes);
    printf("Selecciona una opcion\n");
    printf("0. Salir\n1. Registrar nuevo paciente\n2. Medir IMC\n");
    printf("3. Medir Presión Arterial\n4. Medir Glucosa\"5. Imprimir expediente de paciente\n");
    printf("6. Mostrar información de todos los pacientes\nNumero: ");
    scanf("%d",&decision);
    system("clear");
    switch(decision){
        case 1: 
        registrarPaciente(paciente, &cont_pacientes);
        break;
        case 2:
        medirIMC(paciente, registro_medico, &cont_pacientes);
        break;
        case 3:
        arterialPressure(paciente, registro_medico, &cont_pacientes);
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