#include<stdio.h>

int main(){
    //recordar 5 grupo 30 estudiantes
    //variables
    int grupo, estudiante, cont_notamax=0,cont_aprob=0;
    int calif[5][30];
    int acum_grupo[5];
    int nota_alta[5];
    float prom_grupo[5]; 

    //entradas

    for(grupo = 0; grupo<5; grupo++){ // se recorren primero los estudiantes
        for(estudiante=0;estudiante<30;estudiante++){
            printf("Grupo %d, estudiante %d \n ", grupo+1, estudiante+1);
            printf("Indique la nota: ");
            scanf("%d",&calif[grupo][estudiante]);
        }
        printf("\n");
    }

    //procesos

    for(grupo = 0; grupo<5; grupo++){ // se recorren primero los estudiantes
        for(estudiante=0;estudiante<30;estudiante++){
            if(calif[grupo][estudiante]==100){
                cont_notamax++;
            }
            if(calif[grupo][estudiante]>=71){
                cont_aprob++;
            }
            //acumulador de notas por grupo
            acum_grupo[grupo] += calif[grupo][estudiante];

            //nota mas alta por grupo

            if(estudiante==0){ //asumimos que la primera nota es la mas alta
                nota_alta[grupo] = calif[grupo][estudiante];
            }
            else{ //si ya no es el primer estudiante
                if(nota_alta[grupo] < calif[grupo][estudiante]){ //si la nota es mas alta
                nota_alta[grupo] = calif[grupo][estudiante]; //se almacena en el grupo correspondiente              
                }
            } //fin de sección nota mas alta

            //calculo de promedio
            if(estudiante == 29){
                prom_grupo[grupo] = (float)acum_grupo[grupo]/30;
            }

         }
    }

    //salida
    for(grupo = 0; grupo<5; grupo++){
        printf("El promedio del grupo %d es %.2f \n", grupo+1,prom_grupo[grupo]);
        printf("La calificación más alta del grupo %d es %d \n", grupo+1,nota_alta[grupo]);
    }
    printf("la cantidad de estudiantes que obtuvieron nota maxima fueron %d \n", cont_notamax);
    printf("La cantidad de estudiantes aprobados fueron %d \n",cont_aprob);


}//fin de main