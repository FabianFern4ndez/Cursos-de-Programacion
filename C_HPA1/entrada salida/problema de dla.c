#include<stdio.h>
int main(){
    //variables
    int voto, acum1=0, acum2=0, acum3=0, acum4=0, total;
    float p1, p2, p3, p4;


    //procesos
    printf("Este programa cuenta los votos dependiendo del número. \n");
    printf("Ingrese 1 para candidato 1 \n");
    printf("Ingrese 2 para candidato 2 \n");
    printf("Ingrese 3 para candidato 3 \n");
    printf("Ingrese 4 para candidato 4 \n");
    printf("Ingrese 0 para terminar el conteo \n");
    do{
        printf("Ingrese el número de su candidato: ");
        scanf(" %d", &voto);
        switch(voto){
            case 1: acum1 +=1;
            break;
            case 2: acum2 +=1;
            break;
            case 3: acum3 +=1;
            break;
            case 4: acum4 +=1;
            break;

        }//final de switch
    } while(voto!=0);
    //cálculos
    total = acum1 + acum2 + acum3 + acum4;
    p1 = (float)acum1 /total*100;
    p2 = (float)acum2/total*100;
    p3 = (float)acum3 /total*100;
    p4 = (float)acum4/total*100;
    //salidas
    printf("El total de votos fue %d \n", total );
    printf("EL candidato 1 tuvo %d votos, su porcentaje fue: %f%% \n",acum1, p1);
    printf("EL candidato 2 tuvo %d votos, su porcentaje fue: %f%% \n",acum2, p2);
    printf("EL candidato 3 tuvo %d votos, su porcentaje fue: %f%% \n",acum3, p3);
    printf("EL candidato 4 tuvo %d votos, su porcentaje fue: %f%% \n",acum4, p4);
    


}//final de main