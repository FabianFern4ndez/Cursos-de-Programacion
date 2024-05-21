#include<stdio.h>

int main(){
    //variables
    int f,c;
    int matriz[12][12];

    //procesos
    for(f=0;f<12;f++){
        for(c=0;c<12;c++){
            matriz[f][c] = (f+1)*(c+1);
        }
    }

    //salida
    for(f=0;f<12;f++){
        printf("Tabla del %d \n", f+1);
        for(c=0;c<12;c++){
            
            printf("%d x %d = %d \n",f+1,c+1,matriz[f][c]);
        }
        printf("\n");
    }

    
}//fin de main