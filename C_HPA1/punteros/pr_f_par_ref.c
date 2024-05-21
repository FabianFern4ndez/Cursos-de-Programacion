/*
Para los siguientes enunciados, elabore los programas en C implementando 
funciones en las que aplique el paso de parámetros por valor y por 
referencia. 

Elabore un programa que calcule el área y perímetro de un rectángulo 
y muestre el resultado. Elabore un programa que permita calcular el área 
de un trapecio y muestre el resultado. 

Elabore un programa en C que permita ingresar la nota de 5 estudiantes. 
El programa debe determinar el promedio de las notas, también debe
indicar la nota más alta obtenida y la calificación más baja. 

Elabore un programa en C que permita ingresar la estatura de un grupo 
de N participantes y clasificarlas de acuerdo con la siguiente tabla: 
categoría 	
Rango de estatura 
Bajos : Menor a 1.50m 
Medianos : 1.50m a 1.75m 
Altos : Mayor a 1.75 
El programa debe determinar: 
Estatura promedio 
Cantidad de personas en cada categoría 
Cantidad de personas con estatura por encima del promedio y 
por debajo del promedio */

                            //funciones
float rectanguloAreaValor(float a, float b);
float rectanguloPerimValor(float a, float b);
void rectanguloAreaPerimetroRef(float a, float b, float *area, float *p);
float trapecioAreaValor(float a, float b, float c);
float trapecioPerimValor(float a, float b, float c, float d);
void trapecioRef(float a, float b, float c, float d, float altura, float *area, float *p);
void programa1();
float promedioValor(int notas[]);
void promedioClasifRef(int notas[], float *prom, int *nota_alta, int *nota_baja);
void programa2();
float estaturaPromedioValor(float *est, int tam);
void estaturaPromedioRef(float *est, int tam, float *prom);
void estaturaClasifRef(float *est, int tam,  int *bajos, int*medianos, int *altos, int *arriba, int *debajo, float *prom);

                         //programa principal
int main() 
{
    //variables
    int decision=1;
    while(decision!=0)
    {
        printf("Menu\n");
        printf("0. Salir \n");
        printf("1. Programa Trapecio y Triangulo\n");
        printf("2. Programa Estudiantes Promedio\n");
        printf("3. Programa Estaturas\n");
        printf("Selecciona un numero: ");
        scanf("%d",&decision);
        switch(decision)
        {
            case 1:
            printf("\n");
            programa1();
            printf("\n");
            break;
            case 2:
            printf("\n");
            programa2();
            printf("\n");
            break;
            case 3:
            printf("\n");
            programa3();
            printf("\n");
            break;
        }

    }
}
                  //programa del trapecio y del triangulo
void programa1()
{
    //variables
    int decision;
    //subprograma 1
    float lcorto, llargo, area_rect, perim_rect, a_rect2, p_rect2;
    //subprograma 2
    float altura, area_trap, per_trap, area_trapref, per_trapref, lado3, lado4;
    //subprograma 3

    //proceso
    printf("Menu\n");
    printf("1. Rectangulo\n");
    printf("2. Trapecio Area\n");
    printf("3. Trapecio Perimetro\n");
    scanf("%d",&decision);

    switch(decision)
    {
        case 1:
        printf("Lado corto: ");
        scanf("%f",&lcorto);
        printf("lado largo: ");
        scanf("%f",&llargo);
        area_rect = rectanguloAreaValor(lcorto, llargo);
        perim_rect = rectanguloPerimValor(lcorto, llargo);
        rectanguloAreaPerimetroRef(lcorto,llargo,&a_rect2,&p_rect2);
        break;

        case 2:
        printf("Base superior: ");
        scanf("%f",&lcorto);
        printf("Base inferior: ");
        scanf("%f",&llargo);
        printf("Altura: ");
        scanf("%f",&altura);
        area_trap = trapecioAreaValor(lcorto,llargo,altura);
        trapecioRef(lcorto, llargo, 0, 0,altura, &area_trapref, &per_trapref);
        break;

        case 3:
        printf("Base superior: ");
        scanf("%f",&lcorto);
        printf("Base inferior: ");
        scanf("%f",&llargo);
        printf("Lado izquierdo: ");
        scanf("%f",&lado3);
        printf("Lado derecho: ");
        scanf("%f",&lado4);
        per_trap = trapecioPerimValor(lcorto, llargo, lado3, lado4);
        trapecioRef(lcorto, llargo, lado3, lado4,0, &area_trapref, &per_trapref);
    }

    //salida
    printf("\n");
    switch(decision)
    {
        case 1:
        printf("Por valor\n");
        printf("Area = %.2f\n",area_rect);
        printf("Perimetro = %.2f\n",perim_rect);
        printf("Por Referencia\n");
        printf("Area = %.2f\n",a_rect2);
        printf("Perimetro = %.2f\n",p_rect2);
        break;

        case 2:
        printf("Por valor\n");
        printf("Area = %.2f\n",area_trap);   
        printf("Por Referencia\n");
        printf("Area = %.2f\n",area_trapref);
        break;
        
        case 3:
        printf("Por valor\n");
        printf("Perimetro = %.2f\n",per_trap);
        printf("Por Referencia\n");
        printf("Perimetro = %.2f\n",per_trapref); 
        break; 
    }
}
                    //programa de los estudiantes
void programa2()
{
//variables
int notas[5], i, nota_alta, nota_baja;
float prom, prom2;

//entradas
for(i=0;i<5;i++)
{
   printf("Nota de estudiante %d: ",i+1);
   scanf("%d",&notas[i]);
}
//procesos
prom = promedioValor(notas);
promedioClasifRef(notas, &prom2, &nota_alta, &nota_baja);
//salidas
printf("Por valor\n");
printf("Promedio: %.2f\n",prom);
printf("Por referencia\n");
printf("Promedio: %.2f\n ",prom2);
printf("Nota mas alta: %d\n", nota_alta);
printf("Nota mas baja: %d\n", nota_baja);
}

                      //programa de las estaturas
void programa3()
{

  //variables
    int tam, i;
    float *ptr, prom1, prom2;
    int altos=0, bajos=0, medianos=0, encima_prom=0, debajo_prom=0;
  //entradas
    printf("Cantidad de participantes: ");
    scanf("%d",&tam);

    ptr = (float*)malloc(tam*4); //arreglo dinamico

    for(i=0;i<tam;i++) //lectura
    {
        printf("Estatura del participante %d ",i+1);
        scanf("%f",(ptr+i)); //ojo, trabajando con direcciones
    }
    //procesos
    prom1 = estaturaPromedioValor(ptr, tam);
    estaturaPromedioRef(ptr, tam, &prom2);
    estaturaClasifRef(ptr, tam, &bajos, &medianos, &altos, &encima_prom, &debajo_prom, &prom2);
    //salidas
    for(i=0;i<tam;i++)
    {
        printf("Participante %d Estatura %.2f\n", i, *(ptr+i));//valores
    }
    printf("Por valor\n");
    printf("Estatura promedio: %.2f\n", prom1 );
    printf("Por referencia\n");
    printf("Promedio: %.2f\n", prom2);
    printf("Menores de 1.50: %d\n", bajos);
    printf("Entre 1.50 y 1.75: %d\n", medianos);
    printf("Mayores de 1.75: %d\n", altos);
    printf("Arriba del promedio %.2f: %d\n", prom2, encima_prom);
    printf("Debajo de %.2f: %d\n", prom2, debajo_prom);


}


                       //definicion de funciones
float rectanguloAreaValor(float a, float b)
{
   return a*b;
}
float rectanguloPerimValor(float a, float b)
{
    return (2*a + 2*b);
}
void rectanguloAreaPerimetroRef(float a, float b, float *area, float *p)
{
    *area = a*b;
    *p = 2*a + 2*b;
}

float trapecioAreaValor(float a, float b, float h)
{
    return ((a+b)*h)/2;
}
float trapecioPerimValor(float a, float b, float c, float d)
{
    return (a+b+c+d);
}
void trapecioRef(float a, float b, float c, float d, float altura, float *area, float *p)
{
    *area = ((a+b)*altura)/2;
    *p = (a+b+c+d);
}
float promedioValor(int notas[])
{
    int i;
    float acum=0;
   for(i=0;i<5;i++)
   {
    acum += notas[i];
   }
   return acum/5;
}

void promedioClasifRef(int notas[], float *prom, int *nota_alta, int *nota_baja)
{
    //promedio
   int i;
   float acum=0;
   for(i=0;i<5;i++)
   {
    acum += notas[i];
   }
   *prom = acum/5;

   //clasificacion
   for(i=0;i<5;i++)
   {
    if(i==0)
    {
        *nota_alta = notas[i];
        *nota_baja = notas[i];
    }
    else
    {
        if(notas[i] > *nota_alta)
        {
            *nota_alta = notas[i];
        }
        if(notas[i] < *nota_baja)
        {
            *nota_baja = notas[i];
        }
    }
 
   }

}
float estaturaPromedioValor(float *est, int tam)
{
    int i;
    float acum=0;
    for(i=0;i<tam;i++)
    {
        acum += *(est+i);
    }
    return (acum/tam);
}

void estaturaPromedioRef(float *est, int tam, float *prom)
{
    int i;
    float acum=0;
    for(i=0;i<tam;i++)
    {
        acum += *(est+i);
    }
    *prom = (acum/tam);
    printf("\n\nAcumulador de la funcion %f\n\n", acum);
}

void estaturaClasifRef(float *est, int tam,  int *bajos, int *medianos, int *altos, int *arriba, int *debajo, float *prom)
{
    int i;
    for(i=0;i<tam; i++)
    {
        if(*(est+i)<1.50)
        {
            (*bajos)++;
        }
        if(*(est+i) >= 1.50 && (*(est+i) <= 1.75))
        {
            (*medianos)++;
        }
        if(*(est+i)>1.75)
        {
            (*altos)++;
        }
        if(*(est+i) > *prom)
        {
            (*arriba)++;
        }
        if(*(est+i) < *prom)
        {
            (*debajo)++;
        }
        
    }

}

