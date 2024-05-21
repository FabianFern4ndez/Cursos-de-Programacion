#include<stdio.h>

struct estudiante {
    int edad, nota;
    char letra;
    char nombre[15], cedula[12], correo[25], sexo;
};

void main(){
    //bloque de declarativas de variables
    struct estudiante est[4];
    int i;

    for(i=0; i< 4; i++){
        printf("Introduzca el nombre del estudiante: ");
        scanf("%s", &est[i].nombre);
        printf("Introduzca el genero: ");
        scanf(" %c", &est[i].sexo);
        printf("Introduzca la nota: ");
        scanf("%i", &est[i].nota);
    }

    //PROCESOS
    /*determinar calificacion en letra*/
    for(i=0; i<4;i++){
        if(est[i].nota >= 91){
            est[i].letra= 'A';
        }
        else if(est[i].nota >= 81){
            est[i].letra= 'B';
        }
        else if(est[i].nota >= 71){
            est[i].letra= 'C';
        }
        else if(est[i].nota >= 61){
            est[i].letra= 'D';
        }
        else {
            est[i].letra= 'F';
        }
    }


    //SALIDA
    for(i=0;i<4;i++){
        printf("\n\n\tESTUDIANTE #%i\n",i+1);
        printf("%s obtuvo una calificacion de %i, en letra obtuvo %c", est[i].nombre, est[i].nota, est[i].letra);

    }

}

