/*2.	Elabore un programa que almacene las edades de los participantes de una 
encuesta. La encuesta fue aplicada a una muestra de 25 individuos y 
se desea hacer un estudio estadístico de las edades de los participantes.
Después de culminar la aplicación de la encuesta se desea conocer dos puntos: 
a.	¿Cuál fue el participante más joven y cuál es su edad?
b.	¿Cuál fue el participante más viejo y su edad?
c.	¿Cuál es la edad promedio?
d.	¿Cuántos están por encima del promedio?
e.	¿Cuántos están por debajo del promedio?
*/

//variable global de cantidad de participantes
int cpart=15;
#include<stdio.h>


int mayorEdad(int edad[]){
    int i, res=0;
    for(i=0;i<cpart;i++){
        if(res<edad[i]){
            res = edad[i];
        }
    }
    return res;
}

int masViejo(int viejo[],int top){
    int i;
    for(i=0;i<cpart;i++){
        if(top == viejo[i]){
            viejo[i]=0;
        }
    }
}

int menorEdad(int edad[]){
    int i, res=100;
    for(i=0;i<cpart;i++){
        if(res>edad[i]){
            res = edad[i];
        }
    }
    return res;
}

int masJoven(int joven[],int top){
    int i;
    for(i=0;i<cpart;i++){
        if(top == joven[i]){
            joven[i]=0;
        }
    }
}

int promedio(int edad[]){
    int i, acum = 0;
    for(i=0;i<cpart;i++){
        acum += edad[i];
    }
    return acum/cpart;
}

int main(){
    //variables
    int i, edad[cpart], viejo[cpart],joven[cpart];
    int mayor_edad, menor_edad;
    int prom, cont_encima=0, cont_igual=0, cont_debajo=0;
    
    //entradas
    for(i=0;i<cpart;i++){
        printf("Participante %d Edad: ",i+1);
        scanf("%d",&edad[i]);
        viejo[i]=edad[i];
        joven[i]=edad[i];
    }
    //procesos
    mayor_edad = mayorEdad(edad);
    menor_edad = menorEdad(edad);
    masViejo(viejo,mayor_edad);
    masJoven(joven,menor_edad);
    prom = promedio(edad);

    for(i=0;i<cpart;i++){
        if(edad[i]>prom){
            cont_encima++;
        }
        if(edad[i]<prom){
            cont_debajo++;
        } 
        if(edad[i]==prom){
            cont_igual++;
        } 
        
    }

    //salidas
    printf("\n");
    printf("Participantes mas viejos \n");
    for(i=0;i<cpart;i++){
        if(viejo[i]== 0){
            printf("Participante %d con edad %d \n",i+1, edad[i]);
        }
    }
    printf("Participantes mas joven \n");
    for(i=0;i<cpart;i++){
        if(joven[i]== 0){
            printf("Participante %d con edad %d \n",i+1,edad[i]);
        }
    }
    printf("Promedio de edad: %d \n",prom);
    printf("Encima del promedio %d \n",cont_encima);
    printf("Debajo del promedio %d \n",cont_debajo);
    printf("Igual al promedio %d \n",cont_igual);

   
}//fin de main











/* lo que no sirvio
//procesos
    joven = masJoven(edad) + 1;
    viejo = masViejo(edad) + 1;
    //salidas
    printf("El participante mas joven fue el %d con edad de %d \n",joven,edad[joven-1]);
    printf("El participante mas viejo fue el %d con edad de %d \n",viejo,edad[viejo-1]);
//b
int masViejo(int edad[]){
    int i,pos_viejo;
    for(i=0;i<cpart;i++){
        if(i==0){
            pos_viejo = 0;
        }
        else{
            if(edad[i]>edad[i-1]){
                pos_viejo = i;
            }
        }      
    }
    return pos_viejo;
}

*/

/* esta tampoco sirvio equisde
/*a partir del inciso 1 surge duda sobre que pasa si mas de un participante 
tiene la misma edad
idea: primero generamos funcion que calcule la mayor edad, luego creamos otra funcion
que devuelva el numero cuando encuentra a un participante con esa edad
por ultimo hacemos un array en la principal que almacene las posiciones
*/
/*int mayorEdad(int edad[]){
    int i, res=0;
    for(i=0;i<cpart;i++){
        if(res<edad[i]){
            res = edad[i];
        }
    }
    return res;
}

int masViejo(int top, int edad[], int control){
    int i;
    for(i=control;i<cpart;i++){
        if(top == edad[i]){
            return i+1;
        }
    }
}



//a
int masJoven(int edad[]){
    int i,pos_joven;
    for(i=0;i<cpart;i++){
        if(i==0){
            pos_joven = 0;
        }
        else{
            if(edad[i]<edad[i-1]){
                pos_joven = i;
            }
        }      
    }
    return pos_joven;
}

  //procesos
    mayor_edad = mayorEdad(edad);
    for(i=0;i<cpart;i++){
        viejo[i] = masViejo(mayor_edad,edad,i);
    }

    //salidas
    printf("Edad mas vieja %d \n",mayor_edad);
    for(i=0;i<cpart;i++){
        if(viejo[i]!=0){
            printf("Participante %d \n",viejo[i]);
        }
    }
*/