#funcionan parecido a C

#los escalares pasan por valor y las listas por referencia

#si quieres que una variable se tenga alcance global dentro de una funcion
#puedes declararla asi global var = 2

#  def function_name():
#     cuerpo de la función    forma convencional de definir funcion
def mensaje():
    print("Hola desde una funcion")
mensaje()

#funciones con parametros
a = 3
def numero(a):
    print("Numero igual a", a)
    
numero(a)
#si la funcion tiene mas de un parametro se separan con comas

#otra forma de pasar valores a la funcion


def introduction(first_name, last_name):
    print("Hola, mi nombre es", first_name, last_name)
 
introduction(first_name = "James", last_name = "Bond")
introduction(last_name = "Skywalker", first_name = "Luke")

#puedes darle valores predeterminados a una funcion por si el usuario no los llena todos
#pero se le dara prioridad a los del usuario
def introduction(first_name="Juan", last_name="González"):
    print("Hola, mi nombre es", first_name, last_name)
    
introduction("Fernandez")

#las funciones aqui retornan con el comando return

def funcionZzz():
    return 33

print("El numero",funcionZzz())

#metiendo arreglos como argumentos de funcion

def list_sum(lst):
    s = 0
 
    for elem in lst:
        s += elem
 
    return s

print(list_sum([5, 4, 3]))

#devolver lista en el return

def strange_list_fun(n):
    strange_list = []
    
    for i in range(0, n):
        strange_list.insert(0, i)
    
    return strange_list

print(strange_list_fun(5))



#problemas interesantes

#Tu tarea es escribir y probar una función que toma 
# un argumento (un año) y devuelve True si el año es un 
# año bisiesto, o False si no lo es.

#Tu tarea es escribir y probar una función que toma dos argumentos 
# (un año y un mes) y devuelve el número de días del mes/año dado 
# (mientras que solo febrero es sensible al valor year, 
# tu función debería ser universal).

#u tarea es escribir y probar una función que toma tres argumentos 
# (un año, un mes y un día del mes) y devuelve el día correspondiente
# del año, o devuelve None si cualquiera de los argumentos no es 
# válido.

#Tu tarea es escribir una función que verifique si un número es 
# primo o no.

#Tu tarea es escribir un par de funciones que conviertan l/100km a 
# mpg (milas por galón), y viceversa.

#calcular fibonacci y factorial usando recursividad