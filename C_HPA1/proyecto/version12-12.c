#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 100
                     //definicion de structuras
struct fecha {
    int day, month, year;
};

struct paciente_datos { //Completado (modificado)
    char nombre[15], apellido[15], cedula[12], genero;
    int edad;
    struct fecha fecha_nacimiento;
};

struct paciente_registro_medico { //En desarrollo
    //para el programa del imc
    float imc; 
    char estado_imc[20];
   
    //para el programa de presion arterial
    char presionArterial[20];
    float sistolica;
    float diastolica;

    //para el programa de glucosa
    char glucosa[20];
    float valor_glucosa;
};

                    //definicion de funciones
//case 1
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
       scanf("%d/%d/%d", &paciente[i].fecha_nacimiento.day, &paciente[i].fecha_nacimiento.month,  &paciente[i].fecha_nacimiento.year);
       printf("Fecha de nacimiento: %02d/%02d/%d\n", paciente[i].fecha_nacimiento.day, paciente[i].fecha_nacimiento.month, paciente[i].fecha_nacimiento.year);

    }   
     (*cont_pacientes)=i;    
    printf("\n");
}

int findPatient(struct paciente_datos paciente[], int contador, const char cedula[])
{
    for (int i=0; i<contador; i++){
        if (strcmp(cedula, paciente[i].cedula) == 0){
            return i; //Se encuentra el paciente, 
        }
    }
    return -1;//el paciente no fue encontrado
}
//case 2
void medirIMC(struct paciente_datos paciente[], struct paciente_registro_medico registro_medico[], int *cont_pacientes)
{
    char cedula[12];
    int index;
    float peso, estatura, imc;
    printf("Cedula de identidad del paciente: ");
    scanf("%s", cedula);
    index=findPatient(paciente, *cont_pacientes, cedula);

    if (index!=-1){
        printf("Paciente %d encontrado.\n", index+1);
        printf("Ingrese el peso del paciente en kilogramos (kg): ");
        scanf("%f", &peso);
        printf("Ingrese la estatura del paciente en metros (m): ");
        scanf("%f", &estatura);
        imc=peso/(estatura*estatura);
        printf("El índice de masa corporal del paciente %d es %.2f, por lo tanto pertenece a la categoría: ", index+1, imc);
        if (imc<18.5){
            printf("Bajo peso\n");
            strcpy(registro_medico[index].estado_imc, "Bajo Peso");
        }
        else if (imc>=18.5 && imc<=24.9){
            printf("Normal, peso apto para su salud\n");
            strcpy(registro_medico[index].estado_imc, "Peso Normal");
        }
        else if (imc>=25 && imc <=29.9){
            printf("Sobrepeso\n");
            strcpy(registro_medico[index].estado_imc, "Sobrepeso");
        }
        else if (imc>=30 && imc<=34.9){
            printf("Obesidad I\n");
            strcpy(registro_medico[index].estado_imc, "Obesidad II");
        }
        else if (imc>=35 && imc <=39.9){
            printf("Obesidad II\n");
            strcpy(registro_medico[index].estado_imc, "Obesidad IO");
        }
        else {
            printf("Obesidad III\n");
            strcpy(registro_medico[index].estado_imc, "Obesidad III");
        }
        // Aqui se almacenaria los datos 
        registro_medico[index].imc=imc;
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
//case 3
void arterialPressure(struct paciente_datos paciente[], struct paciente_registro_medico registro_medico[], int *cont_pacientes){
    char cedula[12];
    int index;
    float systolicPressure=0, diastolicPressure=0;
    printf("La presión sistolica se refiere a la presion de la sangre en la arteria cuando se contrae el corazon.\n");
    printf("Mientras que la diastolica se refiere a la presion de la sangre en la arteria cuando el corazon se relaja entre latidos.\n\n");
    printf("Cedula de identidad del paciente: ");
    scanf("%s", cedula);
    index = findPatient(paciente, *cont_pacientes, cedula);

    if (index!=-1){
        printf("Paciente %d encontrado.\n", index+1);
        printf("Ingrese la presion sistolica: ");
        scanf("%f", &systolicPressure);
        printf("ingrese la presion diastolica: ");
        scanf("%f", &diastolicPressure);
        //habia que guardar estos valores en struct
        registro_medico[index].sistolica = systolicPressure;
        registro_medico[index].diastolica = diastolicPressure;

        if (systolicPressure<120 && diastolicPressure<80){
            printf("Presion normal\n");
            strcpy(registro_medico[index].presionArterial, "Presion Normal");     
        }
        else if ((systolicPressure>=120 && systolicPressure<=129) && diastolicPressure<80){
            printf("Elevada\n");
            strcpy(registro_medico[index].presionArterial, "Elevada");
        }
        else if ((systolicPressure>=130 && systolicPressure<=139) && (diastolicPressure>=80 && diastolicPressure<=89)){
            printf("Hipertension arterial estado 1\n");
            strcpy(registro_medico[index].presionArterial, "H. Arterial Estado 1");
        }
        else if ((systolicPressure>=140 && systolicPressure<=180) && (diastolicPressure>=90 && diastolicPressure<=120)){
            printf("Hipertension arterial estado 2\n");
            strcpy(registro_medico[index].presionArterial, "H. Arterial Estado 2");
        }
        else if (systolicPressure>180 && diastolicPressure>120){
            printf("Crisis hipertensiva\n");
            strcpy(registro_medico[index].presionArterial, "Crisis Hipertensiva");
        }
        // Aqui se almacenaria los datos (elimino esto)
       /* registro_medico[index].presionArterial = presionArterial; 
        strcpy(registro_medico[index].status, "Estatus"); 
        if (index+1>*cont_pacientes) {
            *cont_pacientes=index+1;
        }*/
    }
    else {
        printf("Paciente no encontrado. Redirigiendo a la opción de registrar nuevo paciente.\n");
        registrarPaciente(paciente, cont_pacientes);
    }
    printf("\n");
}

//case 4
void medirGlucosa(struct paciente_datos paciente[], struct paciente_registro_medico registro_medico[] , int*contador)
{
    //variables
    int medida_glucosa;
    int estado_muestra;
    char cedula[12];
    int i;
    //validacion
    
    printf("Numero de cedula: ");
    scanf("%s", cedula);
    //proceso
    for(i=0;i<(*contador);i++)
    {
       if(strcmp(cedula, paciente[i].cedula)==0)
       {
          printf("Indique la medida de glucosa en sangre(mg/dl): ");
          scanf("%d", &medida_glucosa);
          registro_medico[i].valor_glucosa = medida_glucosa;
          printf("Indique 0 para ayuno, 1 prospandial\nNumero: ");
          scanf("%d",&estado_muestra);
          if(estado_muestra == 0)
          {
            if(medida_glucosa >= 70 && medida_glucosa < 100)
            {
                printf("\nSin diabetes\n");
                strcpy(registro_medico[i].glucosa, "Sin Diabetes");
            }
            if(medida_glucosa >= 100 && medida_glucosa <= 126)
            {
                printf("\nPre Diabetes\n");
                strcpy(registro_medico[i].glucosa, "Pre Diabetes");
            }
            if(medida_glucosa > 126)
            {
                printf("\nDiabetes\n");
                strcpy(registro_medico[i].glucosa, "Diabetes");
            }
            break;
          }

          if(estado_muestra == 1)
          {
            if(medida_glucosa < 140)
            {
                printf("\nSin diabetes\n");
                strcpy(registro_medico[i].glucosa, "Sin Diabetes");
            }
            if(medida_glucosa >= 140 && medida_glucosa <= 199)
            {
                printf("\nPre Diabetes\n");
                strcpy(registro_medico[i].glucosa, "Pre Diabetes");
            }
            if(medida_glucosa > 200)
            {
                printf("\nDiabetes\n");
                strcpy(registro_medico[i].glucosa, "Sin Diabetes");
            }
            break;
          }
          
       }
    }
    // si no encontro nada
     if(i==(*contador))
        {
        printf("Paciente no encontrado. Redirigiendo a la opción de registrar nuevo paciente.\n");
        registrarPaciente(paciente, contador);
        }
}

                         //funciones de impresion
//case 5
void imprimirExpediente(struct paciente_datos paciente[], struct paciente_registro_medico registro[], int*contador){
    char cedula[12];
    int i;
    system("clear");  
    printf("Cedula de identidad del paciente: ");
    scanf("%s",cedula);

    for(i=0;i<(*contador);i++)
    {
        if(strcmp(cedula, paciente[i].cedula)==0) //funcion de comparacion de strings
        {
            printf("Paciente %d\n", i+1);
            printf("Generales\n");
            printf("Nombre: %s\n", paciente[i].nombre);
            printf("Apellido: %s\n", paciente[i].apellido);
            printf("Cedula: %s\n", paciente[i].cedula);
            printf("Fecha de nacimiento: %02d/%02d/%d\n", paciente[i].fecha_nacimiento.day, paciente[i].fecha_nacimiento.month, paciente[i].fecha_nacimiento.year);
            printf("Edad: %d\n", paciente[i].edad);
            if(paciente[i].genero == 'f')
            {
                printf("Genero: Femenino\n");
            }
            if(paciente[i].genero == 'm')
            {
                printf("Genero: Masculino\n");
            }
            printf("Expediente medico\n");
            printf("Presion arterial: %s\n", registro[i].presionArterial);
            printf("Estado segun IMC: %s\n", registro[i].estado_imc);
            printf("Diagnostico de estado segun glucosa: %s\n", registro[i].glucosa);
            sleep(3);
            break;
          
        }
        if(i==(*contador))
        {
        
        printf("Cedula no encontrada\n");
        sleep(3);
        }
    }
  
    printf("\n");
}
//case 6
void imprimirTodosExpedientes(struct paciente_datos paciente[],struct paciente_registro_medico registro[], int *contador){
    //variables
    int i;
    //instrucciones
    system("clear");
        for(i=0; i<(*contador); i++)
        {
            printf("Paciente %d\n", i+1);
            printf("Generales\n");
            printf("Nombre: %s\n", paciente[i].nombre);
            printf("Apellido: %s\n", paciente[i].apellido);
            printf("Cedula: %s\n", paciente[i].cedula);
            printf("Fecha de nacimiento: %02d/%02d/%d\n", paciente[i].fecha_nacimiento.day, paciente[i].fecha_nacimiento.month, paciente[i].fecha_nacimiento.year);
            printf("Edad: %d\n", paciente[i].edad);
            if(paciente[i].genero == 'f')
            {
                printf("Genero: Femenino\n");
            }
            if(paciente[i].genero == 'm')
            {
                printf("Genero: Masculino\n");
            }
            printf("Expediente medico\n");
            printf("Diagnostico de presion arterial: %s\n", registro[i].presionArterial);
            printf("Diagnostico de estado segun IMC: %s\n", registro[i].estado_imc);
            printf("Diagnostico de estado segun glucosa: %s\n", registro[i].glucosa);
            printf("\n");
            sleep(3);
            
        }
        printf("\n");
}
                              //FUNCION PRINCIPAL
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
    printf("3. Medir Presión Arterial\n4. Medir Glucosa\n5. Imprimir expediente de paciente\n");
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
        medirGlucosa(paciente, registro_medico, &cont_pacientes);
        break;
        case 5:
        imprimirExpediente(paciente, registro_medico, &cont_pacientes);
        /*en las funciones de impresión faltan los reportes de imc
        porque no se han creado las funciones*/
        break;
        case 6:
        imprimirTodosExpedientes(paciente,registro_medico, &cont_pacientes);
        break;
    }
    } //fin de while   
}