/* Hacer un algoritmo que encuentre e imprima la matriz transpuesta de una 
matriz MAT. La matriz transpuesta de la matriz MAT se encuentra intercambiando 
las filas por las columnas y las columnas por las filas. Si TMAT es la matriz
 transpuesta de MAT, implica entonces que TMAT [columna, fila] es igual a
  MAT [fila, columna]. Si el contenido de MAT es*/

#include<stdio.h>

int main(){
    //variables
    int f,c,i,j;
    //entradas
    printf("Indique la dimension de la matriz\n");
    printf("Numero de filas: ");
    scanf("%d",&f);
    printf("Numero de columnas: ");
    scanf("%d",&c);
    int matriz[f][c];//declaracion tardía de matriz

    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("Fila %d Columna %d Indique el valor: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    //salida
    printf("Matriz Original \n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Transpuesta \n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf(" %d ",matriz[j][i]);
        }
     printf("\n");
    }    
    
}