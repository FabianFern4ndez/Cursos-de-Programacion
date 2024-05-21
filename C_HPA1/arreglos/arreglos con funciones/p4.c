/*4.Elabore un programa que permita calcular el tiempo promedio de 
cada vehículo que compite en una carrera. En la carreraparticipan 20 
vehículos que dan 5 vueltas al circuito. El programa debe determinar el 
tiempo promedio de cada vehículo y almacenarlo en un arreglo. El programa
también debe identificar el tiempo promedio más bajo, el tiempo promedio más alto
y debe presentar los tres primeros lugares.  */

  #include<stdio.h>
  int veh = 5;
  int vueltas = 5;

  float calculoPromedio(float matriz[][vueltas], float prom[]){
    int i, j;
    float acum=0;
    
     for(i=0;i<veh;i++){  
        for(j=0;j<vueltas;j++){
           acum += matriz[i][j];
        }
        prom[i] = acum/vueltas;
        acum = 0;
     }
  }

  float masAlto(float prom[]){
    int i;
    float alto;
    for(i=0;i<veh;i++){
        if(i==0){
            alto = prom[i];
        }
        else if(prom[i]> alto){
            alto = prom[i];
        }
    } 
    return alto;

  }


  float masBajo(float prom[]){
    int i;
    float bajo;
    for(i=0;i<veh;i++){
        if(i==0){
            bajo = prom[i];
        }
        else if(prom[i] < bajo){
            bajo = prom[i];
        }
    }
    return bajo;
  }

  //funcion de determinar los primeros tres lugares, contemplar posibilidad de empate
  

    int main(){
    //variables
     float matriz[veh][vueltas], prom[veh];
     float bajo, alto;
     int i, j;
     //entradas
     for(i=0;i<veh;i++){
        printf("Vehiculo %d \n",i+1);
        for(j=0;j<vueltas;j++){
            printf("Tiempo vuelta %d: ",j+1);
            scanf("%f",&matriz[i][j]); 
        }
     }
     //procesos
     calculoPromedio(matriz,prom);
     alto = masAlto(prom);
     bajo = masBajo(prom);

     //salidas
     printf("Promedios \n");
     for(i=0;i<veh;i++){
        printf("Vehiculo %d Promedio: %.2f \n", i+1, prom[i]);
     }
     printf("Promedio mas alto: %.2f \n",alto);
     printf("Promedio mas bajo: %.2f \n",bajo);

  }