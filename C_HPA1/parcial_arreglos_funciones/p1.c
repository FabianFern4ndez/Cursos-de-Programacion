/*Elabore un programa que lea las calificaciones finales de N estudiantes del 
curso de Base de Datos, y determine cuál es la calificación mayor, 
cuál es la calificación menor, y cuál es la calificación promedio.
 El programa también debe indicar cuántos estudiantes aprobaron el curso 
 (calificación superior a 71), y cuántos estudiantes no aprobaron. 
 (debe aplicar funciones para los procesos)*/

//Fabian Fernandez E-8-196729

 #include<stdio.h>
//funcion que calcula la mayor calificacion
 int califMayor(int calif[], int cant_est)
 {
    int mayor, i;
    for(i=0;i<cant_est;i++)
    {
        if(i==0)
        {
            mayor = calif[i];
        }
        else if(calif[i]>mayor)
        {
            mayor = calif[i];
        }
    }
    return mayor;
 }
//funcion que calcula la calificacion menor
  int califMenor(int calif[], int cant_est)
 {
    int menor, i;
    for(i=0;i<cant_est;i++)
    {
        if(i==0)
        {
            menor = calif[i];
        }
        else if(calif[i]<menor)
        {
            menor = calif[i];
        }
    }
    return menor;
 }
 //funcion que calcula el promedio
 float promedioTotal(int calif[], int cant_est)
 {
    int i, acum=0;
    for(i=0;i<cant_est;i++)
    {
        acum += calif[i];
    }
    return (float)acum/cant_est;
 }

 int main()
 {
    //variables
    int cant_est, i, mayor, menor;
    float promedio;
    int cont_fracaso=0, cont_aprob=0;

    //entradas
    printf("Este programa brinda informacion acerca de los resultados en el curso de Base de Datos \n");
    printf("Indique la cantidad de estudiantes del curso: ");
    scanf("%d",&cant_est);
    int calif[cant_est]; //definicion tardia de arreglo

    for(i=0;i<cant_est;i++)
    {
      printf("Indique la calificacion final del estudiante %d : ",i+1);
      scanf("%d",&calif[i]);
      //clasificador de aprobados y fracasos
      if(calif[i]>71)
      {
        cont_aprob++;
      }
      else
      {
        cont_fracaso++;
      }
    }
    //procesos
    mayor = califMayor(calif, cant_est);
    menor = califMenor(calif, cant_est);
    promedio = promedioTotal(calif, cant_est);

    //salidas
    printf("\nNotas de los Estudiantes registradas \n");
    for(i=0;i<cant_est;i++)
    {
        printf("Estudiante %d Nota: %d \n",i+1, calif[i]);
    }
    printf("La mayor nota registrada fue: %d \n",mayor);
    printf("La menor nota registrada fue: %d \n",menor);
    printf("La nota promedio del grupo fue %.2f \n", promedio);
    printf("La cantidad de aprobados fueron: %d \n",cont_aprob);
    printf("La cantidad de desaprobados fueron: %d \n",cont_fracaso);

 }