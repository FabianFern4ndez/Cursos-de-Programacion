#include<stdio.h>


int main(){
    //variables
    int i;
    float peso, estatura, imc, PesoProm, EstProm, mayor=0,menor=100;
    float AcumPeso=0; //acumuladores
    float AcumEst=0;
    int ContBajoPeso=0;//contadores
    int ContPesoNormal=0;
    int ContSobrePeso=0;
    int ContObes1=0;
    int ContObes2=0;
    int ContObes3=0;


    //instrucciones
    for(i=1;i<21;i++){
        printf("Escribe el peso del paciente %d: ", i);
        scanf(" %f", &peso);
        AcumPeso += peso ;
        printf("Escriba la estatura del paciente %d: ", i);
        scanf(" %f", &estatura);
        AcumEst += estatura;

        imc = (peso)/(estatura*estatura);
        if (imc>=mayor){mayor = imc;} //determinar los mayores imc
        if (imc<=menor){menor = imc;}//determinar menores imc

        if(imc<18.5 && imc>0){
            printf("El paciente %d se encuentra bajo peso \n", i);
            ContBajoPeso+=1;   
        }
        else if(imc>=18.5 && imc<=24.9){
            printf("El paciente %d se encuentra en peso normal \n", i);
            ContPesoNormal+=1;
        }
        else if(imc>=25 && imc<=29.9){
            printf("El paciente %d se encuentra sobre peso \n", i);
            ContSobrePeso+=1;
        }
        else if(imc>=30 && imc<=34.9){
            printf("El paciente %d se encuentra en obesidad 1 \n", i);
            ContObes1+=1;
        }
        else if(imc>=35 && imc<=39.9){
            printf("El paciente %d se encuentra en obesidad 2 \n", i);
            ContObes2+=1;
        }
        else if(imc>40){
            printf("El paciente %d se encuentra en obesidad 3 \n", i);
            ContObes3+=1;    
        }
    }//fin de for
    

    //cálculos de promedio
    PesoProm = AcumPeso/(i-1);
    EstProm = AcumEst/(i-1);

    //salidas
    printf("El peso promedio de los pacientes fue %f \n", PesoProm);
    printf("La estatura promedio de los pacientes fue %f \n",EstProm);
    printf("La cantidad de pacientes bajo peso fue de %d pacientes \n", ContBajoPeso);
    printf("La cantidad de pacientes en peso normal fue de %d pacientes \n", ContPesoNormal);
    printf("La cantidad de pacientes sobre peso fue de %d pacientes \n", ContSobrePeso);
    printf("La cantidad de pacientes en obesidad 1 fue de %d pacientes \n", ContObes1);
    printf("La cantidad de pacientes en obesidad 2 fue de %d pacientes \n", ContObes2);
    printf("La cantidad de pacientes en obesidad 3 fue de %d pacientes \n", ContObes3);
    printf("El mayor imc registrado fue de %f \n" ,mayor);
    printf("El menor imc registrado fue de %f \n", menor);



}//fin del main