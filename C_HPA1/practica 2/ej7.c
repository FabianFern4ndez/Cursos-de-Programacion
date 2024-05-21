/* 7.	Elabore un programa que permita ingresar la nota final obtenida por 20 estudiantes en un curso,
el programa debe presentar la siguiente información:
a.	Cantidad de A obtenidas
b.	Cantidad de B obtenidas
c.	Cantidad de C obtenidas
d.	Cantidad de D obtenidas
e.	Cantidad de F obtenidas
f.	Promedio general del grupo 
g.	Calificación más alta registrada
h.	Calificación más baja registrada
*/

#include<stdio.h>
int main(){
    //variables
    int i, nota, acum, alto=0, bajo=100;
    int a=0, b=0, c=0, d=0, e=0, f=0;
    float prom;

    //instrucciones
    for(i=1; i<=20; i++){
        printf("%d Ingrese su nota: ", i);
        scanf(" %d", &nota);

        

        if(nota > -1 && nota < 101 ){//esto es para que no entren locuras
        acum += nota; //servira mas tarde para el promedio

            if(nota > alto){alto = nota;}
            if(nota<bajo)  {bajo = nota;}

            if(nota < 101 && nota > 90) {a +=1; }
            if(nota < 91 && nota >80)  {b +=1; }
            if(nota < 81 && nota > 70)  {c +=1; }
            if(nota < 71 && nota > 60)  {d +=1; }
            if(nota < 61 && nota > 0)   {f +=1; }
        }//fin del if
        else {printf("El numero esta fuera del rango, intente de nuevo \n"); i=i-1;}
    }//fin de for
       



    prom = (float)acum/i;


    //salidas
    printf("La cantidad de A obtenidas fue: %d \n ", a);
    printf("La cantidad de B obtenidas fue: %d \n", b);
    printf("La cantidad de C obtenidas fue: %d  \n", c);
    printf("La cantidad de D obtenidas fue: %d \n", d);
    printf("La cantidad de F obtenidas fue: %d \n", f);
    printf("El promedio del grupo es de: %f \n" ,prom);
    printf("La nota más alta fue de: %d \n", alto);
    printf("La nota más baja fue de: %d \n", bajo);

}//fin de main