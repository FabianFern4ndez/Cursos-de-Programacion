/*
Elabore un programa que permita almacenar la nota final de un grupo de 20 estudiantes; 
luego de almacenar los datos el programa debe determinar y mostrar:
- nota promedio del grupo
- nota más alta registrada
- nota más baja registrada
- cantidad de aprobados
- cantidad de reprobados

*/
#include<stdio.h>
int main(){
float notas[20];
int i, aprobados, desaprobados;
float acum, max, baja, prom;

for(i=0; i<20; i++){
    do{  
    printf("Indique la nota del estudiante %d.: ", i+1);
    scanf("%f", &notas[i]);
    

    }while (notas[i]<0 || notas[i]>100);
    
    acum = acum + notas[i];
   

    if(notas[i]>=71){
        aprobados++;
    }
    else{
        desaprobados++;
    } //contador de aprobados y desaprobados

    //nota mas alta y baja

    if(i==0){
        max =notas[i];
        baja = notas[i];
    }
    else if(max < notas[i]){
        max = notas[i];
    }
    else if(baja > notas[i]){
        baja = notas[i];
    }
}//fin de for

    prom = acum/20;

//salidas
printf("La nota promedio del grupo es: %.2f \n", prom);
printf("La nota mas alta registrada fue: %.2f \n", max);
printf("La nota mas baja registrada fue: %.2f \n", baja);
printf("La cantidad de aprobados fue: %d \n", aprobados);
printf("La cantidad de desaprobados fue: %d \n", desaprobados);
}//fin de main