#include<stdio.h>

int main(){
    //variables
    int i;
    float vector[10], bonif[10];

    //entradas
    for(i=0;i<10;i++){
        do{
        printf("%d. Ingrese su estatura: ", i+1);
        scanf(" %f",&vector[i]);
        }while(vector[i]<=0);
    }

    //procesos

    for(i=0;i<10;i++){
        if(vector[i]<1.65){
            bonif[i] += 125*vector[i]; 
        }
        if(vector[i]>=1.65 && vector[i]<=1.72){
            bonif[i] += 133*vector[i];
        }
        if(vector[i]>1.72){
            bonif[i] += 145*vector[i];
        }
    }

    //salidas

    for(i=0;i<10;i++){
        printf("El trabajador %d de estatura %.2f obtuvo una bonificación de %.2f \n",i+1,vector[i],bonif[i]);
    }


}//fin de main