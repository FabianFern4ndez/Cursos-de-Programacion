/*
   los punteros ya indican programacion a bajo nivel, permiten la asignacion dinamica de memoria

   def: un puntero es una variable que permite almacenar una direccion de mem
   la direccion no es lo mismo que el valor de una funcion

   Beneficios:
   asignacion dinamica de memoria
   el codigo es mas rapido porque se compila mas facil
   capacidad de pasar estructuras de datos sin ocasionar overhead (exceso de codigo)

   declaracion
   <tipo de dato> <*nombre>;
   un puntero ocupa 4 bytes sin importar el tipo de dato que se le asigne 

   Operaciones con punteros
   direccion & : devuelve la direccion de memoria
   ej: int var, *ptr;
       ptr = &var;

   indireccion * : devuelve el contenido de la variable referenciada por el puntero,
                   en otras palabras accedes a los datos
    ej: int var, *ptr;
        *ptr = var;
    
   asignacion = , la clasica
   se puede asignar: 0 o null para inddicar que no apunta a nada
   direccion de una variable
   el contenido de otro puntero
   Hay que inicializar los punteros
   int *ptr, char c, *ptr2;
   ptr = 0;
   ptr = &c;
   ptr2 = ptr; //le asignas el valor de ptr(que es la direccion de c)
   ptr2 = &ptr; //le asignas la direccion de ptr
   
*/