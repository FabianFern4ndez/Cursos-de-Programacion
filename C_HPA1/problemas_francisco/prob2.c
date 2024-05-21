#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<ctype.h>
float totalCajas(float cajaP, int numC){
    cajaP=cajaP+numC;
    return cajaP;
}
float totalDineroCafe(float cafeP, float costoTotal){
    cafeP=cafeP+costoTotal;
    return cafeP;
}
float asignarP(int resp1){
    float tipCf;
    //Arábica= $10.50, Robusta= 6.00, Libérica=5.00 Excelsa=5.50
    if(resp1==1){
        tipCf=10.50;
    }
    else if(resp1==2){
        tipCf=6.00;
    }
    else if(resp1==3){
        tipCf=5.00;
    }
    else if(resp1==4){
        tipCf=5.50;
    }
    return tipCf;
}
int asignarT(int resp11){
    int tamC;
    //Grande=25 Mediana=10 Pequena=5
    if(resp11==1){
        tamC=25;
    }
    else if(resp11==2){
        tamC=10;
    }
    else if(resp11==3){
        tamC=5;
    }
    return tamC;
}
float asignarC(int resp11){
    float costC;
    //Grandes= 2.00 Mediana= 1.00 Pequena=0.50
    if(resp11==1){
        costC=2.00;
    }
    else if(resp11==2){
        costC=1.00;
    }
    else if(resp11==3){
        costC=0.50;
    }
    return costC;
}
int verificarNumC(char cantC[], int longi){
    int i, valNumC=0;
    while((i<longi)&&(valNumC==0)){
        if(isdigit(cantC[i])!=0){
            i++;
        }
        else{
            valNumC=1;
        }
    }
    return valNumC;
}
void iniciarA(float cafeA[],float cafeR[], float cafeL[], float cafeE[]){
    int i;
    for(i=0;i<3;i++){
        cafeA[i]=0.00;
    }
    for(i=0;i<3;i++){
        cafeR[i]=0.00;
    }
    for(i=0;i<3;i++){
        cafeL[i]=0.00;
    }
    for(i=0;i<3;i++){
        cafeE[i]=0.00;
    }
}
void buscarM(float cafeA[],float cafeR[], float cafeL[], float cafeE[], float cafeM[]){
    cafeM[0]=cafeA[1];
    cafeM[1]=1.00;
    if(cafeM[0]<cafeR[1]){
        cafeM[0]=cafeR[1];
        cafeM[1]=2.00;
    }
    else if(cafeM[0]<cafeL[1]){
        cafeM[0]=cafeL[1];
        cafeM[1]=3.00;
    }
    else if(cafeM[0]<cafeE[1]){
        cafeM[0]=cafeE[1];
        cafeM[1]=4.00;
    }
}
int main(){
    //Bloque de declaracion de variables
    int cont=0, resp=0, resp1, resp11, tamCj, numCj, valNumC, longi=0;
    //Posicion 0 son las cajas
    //Posicion 1 es el total vendido
    float cafeA[2],cafeR[2],cafeL[2],cafeE[2], cafeM[2];
    //Colocar todos los elementos en 0.00
    iniciarA(cafeA,cafeR,cafeL,cafeE);
    float tipCf, costCj, costoPedido, costoTotal;
    char cantC[10];
    //Bloque de instrucciones
    system("cls");
    printf("Bienvenido al sistema de los productores de caf%c.\n\nCreado por el equipo #1, conformado por:\n\n",130);
    printf("Sebastian Olivera\tE-8-204257\nDavid Hou\t\t8-1005-1161\nHassan Rada\t\t8-1017-57\nRaunak Sreedharan\t8-1006-2041");
    printf("\n\n\nPresione cualquier tecla para continuar.");
    getch();
    fflush(stdin);
    //Menu principal
    while(cont==0){
        system("cls");
        printf("%cQu%c proceso desea hacer%c\n\n1. Crear orden de compra.\n2. Ver total de cajas vendidas y total recaudado por cada tipo de caf%c.\n3. Caf%c m%cs vendido y su total recaudado.\n4. Salir del programa.\n",168, 130, 63, 130, 130, 160);
        scanf("%i",&resp);
        fflush(stdin);
        //Verificar respuesta
        while((resp!=1)&&(resp!=2)&&(resp!=3)&&(resp!=4)){
            system("cls");
            printf("Intente de nuevo.\n\n1. Crear orden de compra.\n2. Ver total de cajas vendidas y total recaudado por cada tipo de caf%c.\n3. Caf%c m%cs vendido y su total recaudado.\n4. Salir del programa.\n",130, 130, 160);
            scanf("%i", &resp);
            fflush(stdin);
        }
        //Respuesta del menu
        switch(resp){
            case 1://Crear orden de compra
                resp=0;
                numCj=0;
                tipCf=0.00;
                tamCj=0;
                costCj=0.00;
                //Tipo de cafe
                resp1=0;
                system("cls");
                printf("%cQu%c tipo de caf%c desea%c\n\n",168,130,130,63);
                printf("1. Ar%cbica.\n2. Robusta.\n3. Lib%crica.\n4. Excelsa.\n",160,130);
                scanf("%i",&resp1);
                fflush(stdin);
                //Validar tipo de cafe
                while((resp1!=1)&&(resp1!=2)&&(resp1!=3)&&(resp1!=4)){
                    system("cls");
                    printf("Intente de nuevo\n\n");
                    printf("1. Ar%cbica.\n2. Robusta.\n3. Lib%crica.\n4. Excelsa.\n",160,130);
                    scanf("%i",&resp1);
                    fflush(stdin);
                }
                tipCf=asignarP(resp1);
                //Tamano de caja
                resp11=0;
                system("cls");
                printf("%cQu%c tama%co de caja desea%c\n\n",168,130,164,63);
                printf("1. Grande\n2. Mediana\n3. Peque%ca\n",164);
                scanf("%i",&resp11);
                fflush(stdin);
                //Validar tamano de caja
                while((resp11!=1)&&(resp11!=2)&&(resp11!=3)){
                    system("cls");
                    printf("Intente de nuevo.\n\n");
                    printf("1. Grande\n2. Mediana\n3. Peque%ca\n",164);
                    scanf("%i",&resp11);
                    fflush(stdin);
                }
                tamCj=asignarT(resp11);
                costCj=asignarC(resp11);
                //Cantidad de cajas
                system("cls");
                printf("%cCu%cntas cajas desea%c\n\n",168,160,63);
                gets(cantC);
                fflush(stdin);
                longi=strlen(cantC);
                valNumC=verificarNumC(cantC,longi);
                //Validar cantidad de cajas
                while(valNumC!=0){
                    system("cls");
                    printf("Intente de nuevo.\n");
                    gets(cantC);
                    fflush(stdin);
                    longi=strlen(cantC);
                    valNumC=verificarNumC(cantC,longi);
                }
                numCj=strtol(cantC,NULL,10);
                system("cls");
                costoPedido=(numCj*tamCj*tipCf);
                costoTotal=(numCj*costCj)+costoPedido;
                printf("\t\tPRODUCTORA DE CAFE\n");
                printf("\t\tFactura del cliente\n");
                printf("Caf%c: ",130);
                if(resp1==1){
                    printf("Ar%cbica.",160);
                    cafeA[0]=totalCajas(cafeA[0],numCj);
                    cafeA[1]=totalDineroCafe(cafeA[1],costoTotal);
                }
                else if(resp1==2){
                    printf("Robusta.");
                    cafeR[0]=totalCajas(cafeR[0],numCj);
                    cafeR[1]=totalDineroCafe(cafeR[1],costoTotal);
                }
                else if(resp1==3){
                    printf("Lib%crica.",130);
                    cafeL[0]=totalCajas(cafeL[0],numCj);
                    cafeL[1]=totalDineroCafe(cafeL[1],costoTotal);
                }
                else if(resp1==4){
                    printf("Excelsa.");
                    cafeE[0]=totalCajas(cafeE[0],numCj);
                    cafeE[1]=totalDineroCafe(cafeE[1],costoTotal);
                }
                printf("\nN%cmero de cajas: %i\t\tCosto del Pedido: %c%.2f",163,numCj,36,costoPedido);
                printf("\nCosto Total: %c%.2f",36,costoTotal);
                printf("\n\n\nPresione cualquier tecla para continuar.");
                getch();
                break;
            case 2://Ver total de cajas vendidas y total recaudado por cada tipo de cafe
                resp=0;
                system("cls");
                printf("\t\t\tLISTADOS SOLICITADOS\n\n");
                printf("NOMBR%c DEL CAF%c\t\tTOTAL CAJAS VENDIDAS\t\tTOTAL RECAUDADO",144,144);
                printf("\nAr%cbica\t\t\t\t%.0f\t\t\t\t%c%.2f",160,cafeA[0],36,cafeA[1]);
                printf("\nRobusta\t\t\t\t%.0f\t\t\t\t%c%.2f",cafeR[0],36,cafeR[1]);
                printf("\nLib%crica\t\t\t%.0f\t\t\t\t%c%.2f",130,cafeL[0],36,cafeL[1]);
                printf("\nExcelsa\t\t\t\t%.0f\t\t\t\t%c%.2f",cafeE[0],36,cafeE[1]);
                printf("\n\n\nPresione cualquier tecla para continuar.");
                getch();
                break;
            case 3://Buscar mayor
                resp=0;
                system("cls");
                buscarM(cafeA,cafeR,cafeL,cafeE,cafeM);
                printf("Caf%c m%cs vendido: ",130,160);
                if(cafeM[1]==1.00){
                    printf("Ar%cbica.",160);
                }
                else if(cafeM[1]==2.00){
                    printf("Robusta.");
                }
                else if(cafeM[1]==3.00){
                    printf("Lib%crica.",130);
                }
                else if(cafeM[1]==4.00){
                    printf("Excelsa.");
                }
                printf("\tTotal recaudado: %c%.2f", 36,cafeM[0]);
                printf("\n\n\nPresione cualquier letra para continuar.");
                getch();
                break;
            case 4://Salir del programa
                resp=0;
                cont=1;
                break;
        }
    }
    return 0;
}