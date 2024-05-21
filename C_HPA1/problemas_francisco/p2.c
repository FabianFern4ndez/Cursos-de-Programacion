/*Un  banco  tiene  una  forma  particular  de  generar  sus  tokens  a  los  clientes  
cada  vez  que  los 
mismo realizan una transacción y les solicita les hagan un programa que les cifre los token, de 
modo que los mismos al ser enviados por Internet se puedan transmitir con más seguridad. Todos 
los tokens se transmiten como cadenas de 6 caracteres numéricos. Su aplicación debe leer cadena 
de 6 caracteres numéricos y cifrarlo de la siguiente manera: 
• Convierta cada carácter numérico en un número entero. 
• Remplace cada digito con el resultado de sumarle 7. 
• Ahora obtenga el residuo, después de dividir el nuevo valor entre 10, 
• Después intercambie el primer digito con el quinto, el segundo con el cuarto y el tercero 
con el último. (Este ultimo paso corresponde al esquema de cifrado). 
• Luego imprima el entero cifrado. 
 
Debe escribir una función que reciba como entrada el número cifrado y lo descifre (invirtiendo el 
esquema de cifrado) para formar el número original. 

Trabaje un menú donde el usuario seleccione el proceso que desea hacer, cifrar token o descifrar 
token. Ahora recuerde no se puede descifrar si antes no ha encriptado al token 
*/

int cifrar(int num[]){
    int i,var;
    for(i=0;i<6;i++){
        num[i]=num[i]+7;
        num[i]=num[i]%10;
    }
    //intercambio de 1 y 5
    var = num[0];
    num[0] = num[4];
    num[4] = var;
    //intercambio 2 y 4
    var = num[1];
    num[1] = num[3];
    num[3] = var;
    //intecambio 3 y 6
    var = num[2];
    num[2] = num[5];
    num[5] = var;
    //impresion del cifrado
    printf("Token cifrado: ");
    for(i=0;i<6;i++){
        printf("%d",num[i]);
    }
    return num;

}

#include<stdio.h>

int main(){
    int cadena_numerica[6];
    int i,menu,control=1;
    //menu de entrada
    while(control == 1){
    printf("Bienvenido al Sistema Bancario \n");
    printf("1.Sistema de Cifrado\n");
    printf("2.Sistema de Descifrado\n");
    printf("Que desea hacer: ");
    scanf("%d",&menu);
    //entradas
    switch(menu){
    case 1: //cifrado
    for(i=0;i<6;i++){
    printf("Indique la cifra %d del toke que desea cifrar: ",i+1);
    scanf("%d", &cadena_numerica[i]);
    }
    printf("\n");
    break;
    case 2://aqui el descifrado
    break;

    default:
    printf("Opcion no valida");
    break;
    }//fin de switch menu

    //salidas
    if(menu==1){
        printf("Banco \n");
        printf("Token original: ");
        for(i=0;i<6;i++){
            printf("%d",cadena_numerica[i]);
        }
        printf("\n");
        cifrar(cadena_numerica);
    }//fin de salida para menu 1 //cifrar
    if(menu == 2){
        
    }//salidas para menu 2 descifrar


    //control de reinicio
    printf("\nPulse 1 para reiniciar, 0 para salir: ");
    scanf("%d",&control);

    }//fin de while control
}//fin de main
    
