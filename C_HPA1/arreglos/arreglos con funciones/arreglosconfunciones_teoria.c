/*

formato para pasar todo el arreglo a una funcion

void nombreFuncion(int arreglo[]) //corchete vacio manda todo

return arreglo //no hay que poner el corchete en el return

//programa principal

nombreFuncion(arreglo)//sin los corchetes

//nota

Cuando modificas un arreglo en la funcion se guarda en el programa principal
ya que lo que se mando fue la direccion y no los datos

//cuando pasas el arreglo completo se pasa a la funcion por referencia
si se pasa uno se manda por valor


Arreglos y cadenas de caracteres    

char nombre_cadena[longitud]
o char nombre_cadena[]="Hola"

entre los corchetes se debe colocar el largo de la cadena mas uno, la posicion final representa
final de la cadena y se representa con \o

en el caso char nombre_cadena[]="Hola" , la longitud seria 5

para trabajar cadenas revisar la libreria string.h

para leer cadena
gets(cadena);
o scanf("%s",&varCadena);

gets permite ingresar espacios en blaco y scanf no

cuando se imprime se usa %s

printf("El nombre es %s \n", varCadena );

en la segunda imagen fijate que en el for hay una funcion que se llama strlen de la libreria
string.h
*/