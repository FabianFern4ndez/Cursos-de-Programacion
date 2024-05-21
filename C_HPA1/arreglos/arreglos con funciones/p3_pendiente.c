/*3.Elabore un programa que permita almacenar 3 notas de 15 
estudiantes. Luego de almacenar las notas debe calcular eimprimir
 el promedio de cada estudiante. */
#include<stdio.h>
int est = 15;
int cal = 3;

int promedio(int notas[][est], int prom[]){
    int i,j, acum=0;
  
    for(i=0;i<est;i++){
        for(j=0;j<cal;j++){
            acum += notas[j][i];
        }
        prom[i]= acum/cal;
        acum =0;
    }

}

int main(){
    //variables
    int i,j;
    int notas[cal][est];
    int prom[est];
   
    //entradas
    for(i=0;i<est;i++){
        printf("Estudiante %d \n",i+1);
        for(j=0;j<cal;j++){
            printf("Ingrese la calificacion %d: ",j+1);
            scanf("%d",&notas[j][i]);
        }
        printf("\n");
    }
    //procesos
    promedio(notas,prom);
    //salidas
    for(i=0;i<est;i++){
        printf("Estudiante %d Promedio: %d \n",i+1,prom[i]);
    }
  
}

