/*5.	Elabore un programa en C que permita determinar la cantidad de números múltiplos de 3 o de 5 
comprendidos entre un rango de valores indicado por le usuario, para ello el usuario debe ingresar los 
topes inferior y superior del rango de valores.*/

#include<stdio.h>
int main(){
    //variables
    int lsup, linf; //limites
    int i, cont1=0, cont2 = 0 ;
    int mcinco, mtres;

    //instrucciones
    do{
    printf("Limite Superior: ");
    scanf("%d", &lsup);
    printf("Limite inferior: ");
    scanf("%d", &linf);
    if(linf>lsup || linf==lsup){printf("EL LIMITE SUPERIOR NO PUEDE SER MENOR O IGUAL AL INFERIOR \n");}
    } while(lsup<linf || lsup == linf); //validacion
     
     for(i=linf; i<=lsup; i++){
        mcinco = i%5;
        mtres = i%3;
        if (i != 0){//el cero no cuenta como opcion
        switch (mtres){//contador de multiplos de 5
            case 0: cont2 +=1;
            printf("Multiplo de tres encontrado: %d \n", i);
        }
        switch(mcinco){//contador de multiplos de 3
            case 0: cont1 +=1;
             printf("Multiplo de cinco encontrado: %d \n", i);
        }} //fin del if

     }//fin del for
    
    //salidas
    printf("La cantidad de multiplos de 3 entre %d y %d fueron: %d \n", linf, lsup, cont2);
    printf("La cantidad de multiplos de 5 entre %d y %d fueron: %d \n", linf, lsup, cont1);
    



}//fin de main