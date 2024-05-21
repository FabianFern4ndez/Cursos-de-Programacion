#include<stdio.h>

float promedio(float num1, float num2, float num3)
{
    float p;

    p = (num1 + num2 + num3)/3;

    return p;
}

void promedioReferencia(float num1, float num2, float num3, float *p)
{
    *p = (num1 + num2 + num3)/3;   
}

int main()
{
  float num1, num2, num3, prom, prom2;
  
  printf("3 valores:\n");
  scanf("%f %f %f", &num1, &num2, &num3);
  //este es el clasico pase de param por valor
  prom = promedio(num1, num2, num3);
  promedioReferencia(num1, num2, num3, &prom2); 

  printf("Promedio por valor: %.2f ", prom);
  printf("\nPromedio por ref: %.2f ", prom2);
}