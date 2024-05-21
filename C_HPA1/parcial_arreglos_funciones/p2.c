/*
Elabore un programa que facture productos, 
el mismo debe leer el precio de N productos, el programa
 debe calcular el total de la venta. 
 Existe una promoción 
 que a los productos que tengan un costo por encima de B/.20.00 se 
 les debe hacer un descuento del 8%, 
 debe determinar a cuantos 
 productos se le aplicó el descuento, 
 a cuantos no se le aplica,
 y cuanto es el descuento total aplicado a la venta, y
 cuanto es
 el total a pagar en la factura. 
(debe emplear arreglo 
para almacenar el precio de los N productos, sin funciones)
*/

//Fabian Fernandez E-8-196729


#include<stdio.h>
int main()
{
    //variables
    int cant_prod, i, cont_desc=0, cont_no_desc=0;
    float desc, acum_desc=0, total;

    //entradas
    printf("Cantidad de Productos: ");
    scanf("%d",&cant_prod);
    float precio[cant_prod]; //definicion tardia de arreglo por variable
    for(i=0;i<cant_prod;i++)
    {
        printf("Precio de producto %d : ",i+1);
        scanf("%f",&precio[i]);
        
        
    }
    //procesos
    for(i=0;i<cant_prod;i++)
    {
        if(precio[i]>20)
        {
            desc = precio[i]*0.08; //calcula el descuento
            precio[i] = precio[i] - desc; //lo resta
            acum_desc += desc; //acumula el descuento
            cont_desc++; //cuenta
            desc = 0; //reset a variable desc
        }
        else
        {
            cont_no_desc++;
        }
        total += precio[i];
    }
    //salidas
    printf("\nCosto neto de cada producto\n");
    for(i=0;i<cant_prod;i++)
    {
        printf("Producto %d Costo: %.2f \n",i+1,precio[i]);
    }
    printf("Se le aplico descuento a %d productos\n",cont_desc);
    printf("No se le aplico descuento a %d productos\n",cont_no_desc);
    printf("El descuento total de la venta fue %.2f\n",acum_desc);
    printf("La suma neta de la venta fue %.2f\n",total);

}