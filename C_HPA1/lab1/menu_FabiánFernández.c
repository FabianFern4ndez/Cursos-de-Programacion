#include<stdio.h>
#include<ctype.h>
int main(){
    
    //variables generales
    int reset = 1;
    int opcion;
    //variables problema 1
    int i;
    float peso, estatura, imc, PesoProm, EstProm, mayor=0,menor=100;
    float AcumPeso=0; //acumuladores
    float AcumEst=0;
    int ContBajoPeso=0;//contadores
    int ContPesoNormal=0;
    int ContSobrePeso=0;
    int ContObes1=0;
    int ContObes2=0;
    int ContObes3=0;
    
    //variables problema 2
    int capacidad, edad, contHombre=0, contMujer=0, contJubilados=0;
    char sexo;
    float acumHombre=0;
    float acumMujer=0;

    //variables problema 3

    int cantHijos;
    float salario,salarioTotal=0, bonif, bonifTotal=0,acumBonif=0; 
    //bonifTotal se usará para el incisio a y acumBonif se usará para el c
    


    //instrucciones
    while (reset != 0){ //Cuando reset sea cero finaliza el programa
        
        printf("1. Problema 1 \n");
        printf("2. Problema 2 \n");
        printf("3. Problema 3 \n");
        printf("Escriba el número deacuerdo al programa que quiera ejecutar: ");
        scanf("%d",&opcion);
        switch (opcion)
        {
        case 1:
        for(i=1;i<21;i++){
        printf("Escribe el peso del paciente %d: ", i);
        scanf(" %f", &peso);
        AcumPeso += peso ;
        printf("Escriba la estatura del paciente %d: ", i);
        scanf(" %f", &estatura);
        AcumEst += estatura;

        imc = (peso)/(estatura*estatura);
        if (imc>=mayor){mayor = imc;} //determinar los mayores imc
        if (imc<=menor){menor = imc;}//determinar menores imc

        if(imc<18.5 && imc>0){
            printf("El paciente %d se encuentra bajo peso \n", i);
            ContBajoPeso+=1;
            
        }
        else if(imc>=18.5 && imc<=24.9){
            printf("El paciente %d se encuentra en peso normal \n", i);
            ContPesoNormal+=1;
        }
        else if(imc>=25 && imc<=29.9){
            printf("El paciente %d se encuentra sobre peso \n", i);
            ContSobrePeso+=1;
        }
        else if(imc>=30 && imc<=34.9){
            printf("El paciente %d se encuentra en obesidad 1 \n", i);
            ContObes1+=1;
        }
        else if(imc>=35 && imc<=39.9){
            printf("El paciente %d se encuentra en obesidad 2 \n", i);
            ContObes2+=1;
        }
        else if(imc>40){
            printf("El paciente %d se encuentra en obesidad 3 \n", i);
            ContObes3+=1;    
        }
    }//fin de for
    

    //cálculos de promedio
    PesoProm = AcumPeso/(i-1);
    EstProm = AcumEst/(i-1);

    //salidas
    printf("El peso promedio de los pacientes fue %f \n", PesoProm);
    printf("La estatura promedio de los pacientes fue %f \n",EstProm);
    printf("La cantidad de pacientes bajo peso fue de %d pacientes \n", ContBajoPeso);
    printf("La cantidad de pacientes en peso normal fue de %d pacientes \n", ContPesoNormal);
    printf("La cantidad de pacientes sobre peso fue de %d pacientes \n", ContSobrePeso);
    printf("La cantidad de pacientes en obesidad 1 fue de %d pacientes \n", ContObes1);
    printf("La cantidad de pacientes en obesidad 2 fue de %d pacientes \n", ContObes2);
    printf("La cantidad de pacientes en obesidad 3 fue de %d pacientes \n", ContObes3);
    printf("El mayor imc registrado fue de %f \n" ,mayor);
    printf("El menor imc registrado fue de %f \n", menor);

     break; //fin del problema 1

        case 2:
         printf("Indique la capacidad máxima del gimansio: ");
    scanf("%d", &capacidad);

    for(i=0;i<capacidad;i++){ //bucle que cuenta la cantidad asignada a capacidad
        do{//cada entrada tiene una validación con estructura do while
        printf("%d. Indique su edad: ", i+1);
        scanf("%d",&edad);
        if (edad<18){
            printf("EDAD NO VALIDA \n");
        }
        }while(edad<18);
        do{
        printf("Indique su sexo. Escriba M para masculino, F para femenino: ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);
        if(sexo!='m' && sexo != 'f'){
            printf("SEXO NO VÁLIDO \n");
        }
        }while(sexo!='m' && sexo != 'f');

        //condiciones para hombres
        if(sexo == 'm' && edad>17){
            if(edad>=18 && edad<=25){
            acumHombre += 53.50;
            }
            else if(edad>25 && edad<62){
                acumHombre += 45;
            }
            else if(edad>=62){
                acumHombre += 30.25;
                contJubilados +=1;
            }
            contHombre += 1;
        }//fin de if principal para hombres
        //condiciones para mujeres
        else if(sexo == 'f' && edad>17){
            if(edad>=18 && edad<=25){
            acumMujer += 53.50;
            }
            if(edad>25 && edad<57){
                acumMujer += 43;
            }
            else if(edad>=57){
                acumMujer += 33.25;
                contJubilados +=1;
            }
            contMujer +=1;
            
        }//fin de if principal para mujeres
        
    }//fin de for

    //salidas
    printf("Se inscribieron %d mujeres\n", contMujer);
    printf("Se inscribieron %d hombres\n", contHombre);
    printf("El monto total de las inscripciones fue: %.2f \n", acumHombre+acumMujer);
    printf("El monto de las inscripciones de los hombre fue: %.2f \n", acumHombre);
    printf("El monto de las incripciones de las mujeres fue: %.2f \n", acumMujer);
    printf("La cantidad de jubilados inscritos fue de: %d \n", contJubilados);
        break; //fin del problema 2

        case 3:
        for (i=0;i<27;i++){
        do{//ENTRADA DE EDAD, solo acepta mayores de edad
            printf("%d. Indique su edad: ", i+1);
            scanf("%d",&edad);
            if(edad<18){
                printf("EDAD NO VALIDA \n");
            }
        }while(edad<18);
        do{//entrada de salario, solo acepta valores positivos
            printf("Indique su salario: ");
            scanf("%f",&salario);
            if(salario<0){
                printf("SALARIO NO VALIDO \n");
            }
        }while(salario<0);
        do{//entrada de sexo, solo acepta m o f
            printf("Indique su sexo. Escriba M para hombre, F para mujer: ");
            scanf(" %c",&sexo);
            sexo = tolower(sexo);//para cambiarlo a minuscula y evitar errores
            if(sexo !='m' && sexo!= 'f'){
                printf("SEXO NO VALIDO \n");
            }
        }while(sexo !='m' && sexo!= 'f');
       
        do{//entrada de hijos
            printf("Indique cantidad de hijos: ");
            scanf("%d",&cantHijos);
            if(cantHijos<0){
                printf("CANTIDAD DE HIJOS NO VÁLIDA \n");
            }
        }while(cantHijos<0);

        printf("Empleado %d registrado correctamente \n", i+1);

        //condiciones
        if(sexo == 'm'){//condiciones generales para hombres
            //este bloque de proceso se estará repitiendo así que solo comentaré una vez
            bonif = salario*0.2;
            bonifTotal = bonifTotal + bonif; //este acumulador es para luego calcular salarios por si hay múltiples bonificaciones
           //cabe recalcar que bonifTotal se reiniciará al 0 al final de cada ciclo para que no se acumulen
            salarioTotal = salario + bonifTotal;
            //para acumular las bonificaciones y mostrarlas al final se usará acumBonif al final
            
            if(cantHijos>0){ //sub if por si tienen hijos
                bonif = salario * 0.05;
                bonifTotal = bonifTotal + bonif;
                salarioTotal = salario + bonifTotal;
            }
            //if de clasificación por edad
            if(edad<26){//de 18 a 25
                bonif = salario * 0.05;
                bonifTotal = bonifTotal + bonif;
                salarioTotal = salario + bonifTotal;    
            } 
            else if(edad>=26 && edad<=38){
                bonif = salario * 0.07;
                bonifTotal = bonifTotal + bonif;
                salarioTotal = salario + bonifTotal;
            }
             else if(edad>=39){
                bonif = salario * 0.1;
                bonifTotal = bonifTotal + bonif;
                salarioTotal = salario + bonifTotal;  
            }
            //salidas para hombres
            printf("El empleado %d obtuvo bonificaciones por %.2f y su salario total fue de %.2f \n", i+1, bonifTotal, salarioTotal);
            acumBonif += bonifTotal;
            bonifTotal = 0;

        }//fin de if para hombres
        else if (sexo == 'f'){//condiciones para mujeres
                 bonif = salario*0.25;
                 bonifTotal = bonifTotal + bonif;
                 salarioTotal = salario + bonifTotal;

                 if(cantHijos<=3){ //condiciones dependiendo de cantidad de hijos
                    bonif = salario*0.04;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;   
                 }
                 else if(cantHijos>=4 && cantHijos <= 6){
                    bonif = salario*0.075;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;
                 }
                 else if (cantHijos>6){
                    bonif = salario*0.105;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;  
                 }
                 if(edad<=29){
                    bonif = salario*0.06;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;
                    

                 }
                 else if(edad>=30 && edad<=45){
                    bonif = salario*0.09;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;
                 }
                 else if(edad>45){
                    bonif = salario*0.11;
                    bonifTotal = bonifTotal + bonif;
                    salarioTotal = salario + bonifTotal;
                 }
                 //salida para mujeres
            printf("La empleada %d obtuvo bonificaciones por %.2f y su salario total fue de %.2f \n", i+1, bonifTotal, salarioTotal);
            acumBonif += bonifTotal;
            bonifTotal = 0;
        }// fin de if para mujeres
    } //fin de for

    //salida de monto de bonificación general
    printf("El monto total de bonificaciones fue: %.2f",acumBonif);    



        break;//fin del problema 3
        
        default:
        printf("No se ha seleccionado la opcion correctamente \n");
        break;
        }//fin de switch principal

        printf("Gracias por usar mi programa, pulse 0 para salir o algún numero para reiniciar \n");
        scanf("%d",&reset);

    }

}