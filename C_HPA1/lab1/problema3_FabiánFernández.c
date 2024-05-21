/*3.La empresa GMCorp desea elaborar un programa que permita calcular la bonificación anual que les 
entregará a sus empleados. Para ello toman en cuenta la siguiente información:
a)	todos los varones reciben una bonificación del 20%; adicional a esto si tienen de 18 a 25 años 
reciben 5%, si tienen de 26 a 38 años reciben un 7%, si tienen 39 o más reciben 10%. Si tienen hijos 
reciben un 5% extra de bonificación.
b)	todas las mujeres reciben una bonificación del 25%; adicional a esto si tienen de 18 a 29 años 
reciben 6%, si tienen de 30 a 45 años reciben un 9%, si tienen 46 o más reciben un 11%. Si tienen hijos, 
 recibirán una bonificación adicional de acuerdo con la cantidad de hijos que tienen:
•	3 o menos, reciben un 4%
•	de 4 a 6, reciben un 7.5%
•	más de 6, reciben 10.5%
Considere que la empresa tiene una planta laboral de 27 empleados. Indique:
a)	cuánto será la bonificación obtenida por cada empleado en base a su salario anual?
b)	cuanto será el monto total anual recibido por cada empleado (salario más bonificaciones)?
c)	cuánto será el monto total en concepto de bonificaciones que entregará la empresa?
*/

#include<stdio.h>
#include<ctype.h>
int main (){
    //variables y constantes
    int i, edad, cantHijos;
    float salario,salarioTotal=0, bonif, bonifTotal=0,acumBonif=0; 
    //bonifTotal se usará para el incisio a y acumBonif se usará para el c
    char sexo;

    //instrucciones
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
}//fin de main


      
