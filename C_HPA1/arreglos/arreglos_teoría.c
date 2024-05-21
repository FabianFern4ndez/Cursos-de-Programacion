/*
un arreglo es una variable que permite almacenar multiples valores,

formal: es una variable que trabaja como una estructura de datos y permite almacenar un
conjunto finito de elementos homogéneos(mismo tipo)

características: finito, homegeneo, todo se concentra bajo un único nombre

antes los lenguajes solo aceptaban arreglos homogeneos, hoy día hay algunos que permiten
heterogeneidad de datos

son estáticos (tienen un espacio definido al declararlo)

nota: los arreglos siempre se incializan en 0

formato de declaracion de arreglos unidimensionales

(tipo de dato) (nombre_de_identificador)[tamaño (cantidad de datos)]

int arreglo[10]
(almacena 10 valores del 0 -> 9)

- importante diferenciar tamaño del arreglo del subindice para listar las posiciones

- inicialización del arreglo

int arreglo[5] = {0,1,2,3,821434}

si no conoces los valores puedes inicializar uno y los demás se inicializan automaticamente en 0
 
 int[100] = {9} //las otras 99 se incializan en cero

 importante

 int banco[100]; // en este caso no se inicializan en cero, es diferente, mas bien no se inicializan
 porque no se ha listado nada

otra manera de inicializar
arreglo[] = {0,1,2,3}  //el tamaño del arreglo es 4 ya que es la cantidad de elementos

- inicializar el arreglo con una variables

double banco[x]; si corres este programa da error, porque no esta inicializado

int x = 5;
double banco[x]; ahora si

si necesitas que el usuario ingrese la x, deberías declarar el arreglo debajo

printf("Ingrese valor")
scanf("%d", &x)
int banco[x]

- recorrido del arreglo

se usa una estructura ciclica for, con un contador con el indice del arreglo

int banco[8]

for i = 0, i<8, i++
    printf(" %d ", &banco[i])

recorrerlo alreves
for i = 7, i<= 0, i--
    printf(" %d ", &banco[i])





- arreglos bidimensional - matrices
declaración

tipo_dato nombre[filas][columnas]

int matriz[4][4];

nota: tambien puede ser tridimensionales y se ve como un cubo de rubik

las matrices se pueden representar como coordenadas x y

0      1       2         3

1

2

3

- recorrido de la matriz

int pesos[3][5];
for (f=0;f<3;f++){ //como este esta fuera se recorre filas
    for (C=0;c<5;c++){ //este ciclo es el que trabaja primero llenando todas las columnas de la fila correspondiente
        scanf("%d",&pesos[f][c]);
    }
}




*/