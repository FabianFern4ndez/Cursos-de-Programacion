#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#include<ctype.h>
#define T 6
void cifrar(int clave[]){
    int i;
    for(i=0;i<T;i++){
        clave[i]=(clave[i]+7)%10;
    }
    cambiarP(clave);
}
void descifrar(int clave[]){
    int i;
    cambiarP(clave);
    for(i=0;i<T;i++){
        clave[i]=((clave[i]+10)-7)%10;
    }
}
void cambiarP(int clave[]){
    int x;
    x=clave[0];
    clave[0]=clave[4];
    clave[4]=x;
    x=clave[1];
    clave[1]=clave[3];
    clave[3]=x;
    x=clave[2];
    clave[2]=clave[5];
    clave[5]=x;
}
int verificar(char pass[], int longi){
    int i, veri2;
    while((i<longi)&&(veri2==0)){
        if(isdigit(pass[i])!=0){
            i++;
        }
        else{
            veri2=1;
        }
    }
    return veri2;
}
int main(){
    //Bloque de declaracion de variables
    char pass[6];
    int clave[6];
    int i, cont=0, resp=0, veri1=0, veri2, longi=0, clave2;
    //Bloque de instrucciones
    system("cls");
    printf("Bienvenido al sistema de token del Banco.\n\nCreado por el equipo #1, conformado por:\n\n");
    printf("Sebastian Olivera\tE-8-204257\nDavid Hou\t\t8-1005-1161\nHassan Rada\t\t8-1017-57\nRaunak Sreedharan\t8-1006-2041");
    printf("\n\n\nPresione cualquier tecla para continuar.");
    getch();
    fflush(stdin);
    //Menu principal
    while(cont==0){
        system("cls");
        printf("\t     BANCO\n");
        printf("%cQu%c proceso desea hacer%c\n\n1. Cifrar token.\n2. Descifrar token.\n3. Salir del programa.\n",168, 130,63);
        scanf("%i", &resp);
        fflush(stdin);
        //Verificar respuesta
        while((resp!=1)&&(resp!=2)&&(resp!=3)){
            resp=0;
            system("cls");
            printf("Intente de nuevo.\n\n1. Cifrar token.\n2. Descifrar token.\n3. Salir del programa.\n");
            scanf("%i", &resp);
            fflush(stdin);
        }
        //Respuestas del menu
        switch (resp){
        case 1:
            resp=0;
            system("cls");
            fflush(stdin);
            printf("\t    BANCO\n");
            printf("\tCIFRAR TOKEN\n\n");
            printf("Token original:\t");
            gets(pass);
            longi=strlen(pass);
            veri2=verificar(pass, longi);
            //Verificar token
            while((longi!=6)||(veri2!=0)){
                system("cls");
                fflush(stdin);
                printf("\t    BANCO\n");
                printf("\tCIFRAR TOKEN\n\n");
                printf("Token inv%clido, intente de nuevo: ",160);
                gets(pass);
                longi=strlen(pass);
                veri2=verificar(pass, longi);
            }
            clave2=strtol(pass, NULL, 10);
            //Convertir token a cadena
            for(i=5;i>=0;i=i-1){
                clave[i]=clave2%10;
                clave2=clave2/10;
            }
            cifrar(clave);
            printf("\nToken cifrado:\t");
            //Imprimir token cifrado
            for(i=0;i<T;i++){
                printf("%i", clave[i]);
            }
            veri1=1;
            printf("\n\nPara volver al men%c presione cualquier tecla.",163);
            getch();
            fflush(stdin);
            break;
        case 2:
        resp=0;
            system("cls");
            if(veri1==0){
                printf("\t     BANCO\n");
                printf("\tDESCIFRAR TOKEN\n\n");
                printf("Primero debe cifrar el token.");
                printf("\nPara volver al men%c presione cualquier tecla.",163);
                getch();
                fflush(stdin);
            }
            else{
                printf("\t     BANCO\n");
                printf("\tDESCIFRAR TOKEN\n\n");
                printf("Token cifrado:\t\t");
                //Imprimir token cifrado
                for(i=0;i<T;i++){
                    printf("%i", clave[i]);
                }
                descifrar(clave);
                printf("\n\nToken descifrado:\t");
                //Imprimir token descifrado
                for(i=0;i<T;i++){
                    printf("%i", clave[i]);
                }
                printf("\nPara volver al men%c presione cualquier tecla.",163);
                getch();
                fflush(stdin);

            }
            break;
        case 3:
            resp=0;
            cont=1;
            break;
        }
    }
    return 0;
}