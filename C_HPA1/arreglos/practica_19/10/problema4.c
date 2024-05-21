#include<stdio.h>

int main(){
    //variables
    int n_trans=3, n_clientes=3;
    int f,c;//los clientes son las filas, las transacciones las columnas
    float depositos=0,retiros=0;
    float monto[n_clientes][n_trans];
    float monto_cliente[n_clientes];

    //entradas
    for(f=0;f<n_clientes;f++){
        for(c=0;c<n_trans;c++){
            printf("Cliente: %d transacción: %d monto: ", f+1,c+1);
            scanf("%f",&monto[f][c]);
        }
        printf("\n");
    }

    //procesos
    for (f=0;f<n_clientes;f++){
        for(c=0;c<n_trans;c++){
            monto_cliente[f] += monto[f][c];


            if (monto[f][c]>0){
                depositos += monto[f][c];
            }
            else{
                retiros += (monto[f][c])*(-1);
            }
        }
    }

    //salidas
    printf("El monto total de depositos realizados en el banco fue %.2f \n",depositos);
    printf("El monto total de retiros realizados en el banco fue %.2f \n",retiros);
    printf("Monto atual de cada cliente \n");

     for (f=0;f<n_clientes;f++){
        printf("Cliente %d monto %.2f \n", f+1 ,monto_cliente[f] );
                
    }


}//fin del main