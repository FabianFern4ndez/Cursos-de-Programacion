/* 4.Elabore un programa en C que clasifique 25 números ingresados por el usuario en positivos, 
negativos y cero. El programa debe indicar la cantidad de números ingresados en cada una de las 
clasificaciones indicadas y el porcentaje para cada clasificación.*/

#include<stdio.h>
int main(){
    //variables
    float num;
    int i=0, ptv=0, neg=0, nulo=0;
    float pp, pn, pc;


    //instrucciones
    for (i = 0 ; i <  25 ; i++){
        printf("%d. Escriba un numero: ", i+1);
        scanf("%f",&num);
        if(num > 0){
            ptv = ptv +1;
        } //fin if de positivos
        else if(num == 0){
            nulo = nulo + 1;
        } //fin if de ceros
        else {neg = neg +1;} //fin if de negativos
    }// fin de for

    //calculo de porcentajes
    pp = ((float)ptv / 25) *100; //con esto se puede convertir los acumuladores a flotantes para que la division concuerde
    pn = ((float)neg / 25) *100;
    pc = ((float)nulo / 25) *100;


    //salidas
    printf("La cantidad de numeros positivos fue: %d porcentaje = %.2f  \n", ptv , pp );
    printf("La cantidad de numeros negativos fue: %d porcentaje = %.2f  \n", neg , pn );
    printf("La cantidad de numeros ceros fue: %d porcentaje = %.2f \n", nulo , pc );

}//fin de main()