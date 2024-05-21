/*1.	Elabore un programa que permita almacenar la calificación 
final del curso de Herramientas de Programación Aplicadas I, 
el grupo está conformado por 35 estudiantes. A parte de la calificación final se debe solicitar
 el sexo de cada estudiante para realizar un estudio estadístico en el que se desea conocer la siguiente
 información:
a.	¿Cuál es la calificación promedio del grupo?
b.	¿Cuál fue la calificación más alta?
c.	¿Cuál fue la calificación más baja?
d.	¿Cuántos estudiantes aprobaron el curso?
e.	¿Cuántos varones y cuántas mujeres hay en el grupo?
f.	¿Cuál es el promedio de las calificaciones de las mujeres?
g.	¿Cuál es el promedio de las calificaciones de los hombres?
h.	¿Quiénes tuvieron mejor rendimiento en el curso, los hombres o las mujeres?
*/

//variable global de numero de estudiantes
#include<stdio.h>
#include<ctype.h>
int est = 35;
//a
int promedioGrupo (int calif[]){
    int i;
    int acum=0;
    for(i=0;i<est;i++){
        acum += calif[i];
    }
    return acum/est;
}
//b
int califAlta (int calif[]){
    int i;
    int alta = 0;
    for(i=0;i<est;i++){
        if(calif[i]> alta){
            alta = calif[i];
        }
    }
    return alta;   
}
//c
int califBaja (int calif[]){
    int i;
    int baja = 100;
    for(i=0;i<est;i++){
        if(calif[i]< baja){
            baja = calif[i];
        }
    }
    return baja;   
}
//d
int aprobados (int calif[]){
    int i;
    int aprob = 0;
    for(i=0;i<est;i++){
        if(calif[i] >= 71){
            aprob++;
        }
    }
    return aprob;   
}
//f
int promedioHombres (int calif[], char sexo[]){
    int i;
    int acum=0;
    int cant=0;
    for(i=0;i<est;i++){
        if(sexo[i]=='m'){
            cant++;
        acum += calif[i];
        }
    }
    return acum/cant;
}
//g
int promedioMujeres(int calif[], char sexo[]){
    int i;
    int acum=0;
    int cant=0;
    for(i=0;i<est;i++){
        if(sexo[i]=='f'){
            cant++;
        acum += calif[i];
        }
    }
    return acum/cant;
}




int main(){
    //variables
    int calif[est];
    char sexo[est];
    int i;
    int cont_fem=0,cont_man=0;
    //entradas
    for (i=0;i<est;i++){
        printf("Estudiante %d \n",i+1);
        do{
        printf("Calificacion: ");
        scanf("%d",&calif[i]);
        if(calif[i] < 0 || calif[i] > 100){
            printf("Entrada no valida \n");
        }
        }while(calif[i] < 0 || calif[i] > 100 );

        do{
        printf("Sexo m(masculino) f(femenino): ");
        scanf(" %c",&sexo[i]);
        sexo[i] = tolower(sexo[i]);
        if(sexo[i]=='f'){
            cont_fem++;
        }
        else{
            cont_man++;
        }
        if(sexo[i] != 'm' && sexo[i] != 'f'){
            printf("Entrada no valida \n");
        }
        
        }while(sexo[i] != 'm' && sexo[i] != 'f'); 
    }
    //procesos y salidas
    printf("Promedio general del grupo: %d \n",promedioGrupo(calif));
    printf("Calificacion mas alta: %d \n",califAlta(calif));
    printf("Calificacion mas baja: %d \n",califBaja(calif));
    printf("Cantidad de aprobados: %d \n",aprobados(calif));
    printf("Cantidad de hombres: %d \nCantidad de mujeres: %d\n",cont_man,cont_fem);
    printf("Promedio de notas de los hombres: %d \n", promedioHombres(calif,sexo));
    printf("Promedio de notas de las mujeres: %d \n", promedioMujeres(calif,sexo));
    if(promedioHombres(calif,sexo)>promedioMujeres(calif,sexo)){
        printf("Los hombres obtuvieron mejor promedio\n");
    }
    else if (promedioHombres(calif,sexo)<promedioMujeres(calif,sexo)){
        printf("Las mujeres obtuvieron mejor promedio\n");
    }
    else{printf("Los promedios fueron igualados entre hombres y mujeres\n");}
    
}