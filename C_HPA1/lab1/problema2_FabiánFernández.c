/*Se requiere la elaboración de un programa para el gimnasio XYZ para poder llevar el control de 
las inscripciones, para conocer cuántos de sus clientes son hombres y cuántas son mujeres.

Es importante que la sucursal indique cuál es la cantidad máxima de inscripciones del gimnasio, 
antes de procesar la información.

El costo de la inscripción depende de algunas condiciones:

los hombres se jubilan a los 62 y las mujeres a los 57

a) Indistintamente del sexo de la persona, si su edad está entre 18 y 25 años,
 la inscripción tendrá un costo de $53.50

b) Si son hombres con una edad superior a los 25, la inscripción será $45

c) Si son hombres y están jubilados, la inscripción tendrá un costo de $30.25

d) Si son mujeres con una edad superior a los 25, la inscripción será $43

e) Si son mujeres y están jubiladas, la inscripción tendrá un costo de $33.25

El programa debe mostrar la siguiente información:

a) cuántas mujeres y cuantos hombres hay inscritos.

b) Monto total de las inscripciones del gimnasio

c) Monto de las inscripciones de los hombres

d) Monto de las inscripciones de las mujeres

e) Cantidad de clientes jubilados inscritos*/

#include<stdio.h>
#include<ctype.h>
int main(){
    //variables
    int i, capacidad, edad, contHombre=0, contMujer=0, contJubilados=0;
    char sexo;
    float acumHombre=0;
    float acumMujer=0;

    //instrucciones
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
}//fin de main