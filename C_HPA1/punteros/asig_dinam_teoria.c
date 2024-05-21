 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h> //para trabajar malloc

 void ejemplo1() //un ptr que apunta al primer dato del arreglo
 {
    char arr[25];
    char *ptr;
    //la f strcpy() pasa una cadena a una variable
    strcpy(arr, "Bienvenidos al curso");
    ptr = arr;  //abreviatura de ptr = &arr[0];
    printf("%s \n", ptr);
 } 

  void ejemplo2()
 {
    char arr[25];
    char *ptr;
    //la f strcpy() pasa una cadena a una variable
    strcpy(arr, "Bienvenidos al curso");
    ptr = arr;  //abreviatura de ptr = &arr[0];
    printf("%c \t %c \n", *ptr, arr[0]);
 }  

  void ejemplo3() //reemplazando strings con punteros
 {
    char *ptr;
    ptr = "Bienvenidos al curso desde un puntero";
    printf("%s \n", ptr);
 }  

void ejemplo4() //recorrido del arreglo en puntero
{
   char arr[30], *ptr;
   int x;

   printf("Nombre completo: ");
   gets(arr);

   ptr = arr; // ya la vimos
   //imprimir arreglo letra a letra de forma clasica
   for(x=0; x<strlen(arr); x++)
   {
      printf("%c \n ", arr[x]);
   }
   //imprimir con un puntero
   for(x=0; x<strlen(arr); x++)
   {
      printf("%c \n", *(ptr+x));
      //se imprime el valor de la direccion + x 
   }
}

void ejemplo5()
{
   char arr[4][20];
   int i;

   strcpy(arr[0], "Bocas del Toro");
   strcpy(arr[1], "Veraguas");
   strcpy(arr[2], "Panama Oeste");
   strcpy(arr[3], "Los Santos");

   printf("%s \t  %u \n\n", arr, arr); 
   //%u permite imprimir la direccion de forma entera
   for(i=0;i<4;i++)
   {
      printf("%s \t %u \n\n", arr[i], arr[i]);
   }
}

void ejemplo6() //arreglo de punteros
{
   char *arr[4];
   int i;

   arr[0] = "Chiriqui";
   arr[1] = "Veraguas";
   arr[2] = "Panama Oeste";
   arr[3] = "Los Santos";

   for(i=0;i<4;i++)
   {
      printf("%s \t %u \n\n", arr[i], arr[i]);
   }
}

void ejemplo7()
{
   int *ptr;
   ptr = (int*) malloc(sizeof(int));
   /*Explicacion:
   ptr=  : se lo vamos a asignar a ptr
   (int*): la direccion de memoria debe ser para un dato tipo int
   sizeof(int): para saber el tamaño de la variable, se pudo reemplazar por 2
   malloc(sizeof(int)): obtiene una posicion de memoria libre de tamaño 2 bytes*/
   printf("Valor: ");
   scanf("%i", ptr); //nota que no pones & porque el ptr ya apunta a una direccion
   printf("Valor ingresado %i \n", *ptr);
}

void ejemplo8()
{
   int *ptr, i, tam;
   printf("Tamaño de arreglo: ");
   scanf("%d", &tam);
   ptr = (int*)malloc(tam * sizeof(int));
   printf("Arreglo de %i numeros \n",tam);
   //llenar arreglo
   for(i=0;i<tam;i++)
   {
      printf("Direccion %u Valor: ",(ptr+i));
      scanf("%i",(ptr+i));
   }
   //imprimir arreglo
   printf("\n");
   for(i=0;i<tam;i++)
   {
      printf("Direccion:%u  Valor:%i \n",(ptr+i), *(ptr+i));
   }
   //se libera la memoria osea se borra la variable
   free(ptr); 
}

 int main()
 {
    ejemplo1();
    ejemplo2();
    printf("Punteros como string\n");
    ejemplo3(); //en resumen es mejor usar un puntero que un string
   // ejemplo4(); //recorrido del puntero
   ejemplo5(); 
   /*Lo importante del ejemplo 5 es ver como al declarar el arreglo 4x20
   se mandan 4 cadenas de 20 caraceteres cada una
   por tanto las direcciones cambian de 20 en 20*/
   printf("Arreglo de punteros\n");
   ejemplo6(); //arreglo de punteros
   /*En el 6 al usar punteros ya no es necesario usar los 20 bytes
   ya que se adapta a la cadena por tanto ahorramos memoria*/
   printf("Uso de malloc\n");
   ejemplo7();//uso de malloc()
   printf("\nArreglos dinamicos\n");
   ejemplo8(); //arreglos dinamicos

 }