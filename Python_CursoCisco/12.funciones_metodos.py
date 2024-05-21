# funciones y metodos

#Un método es un tipo específico de función - se comporta como una función y se parece a una función,
# pero difiere en la forma en que actúa y en su estilo de invocación.

#n método es propiedad de los datos para los que trabaja, mientras que una función es propiedad de todo el código.

# result = function(arg)   asi se llama a una funcion
#result = data.method(arg)  asi se llama a un metodo

#Método append()  list.append(value)
#Toma el valor de su argumento y lo coloca al final de la lista que posee el método.

#Método insert() list.insert(location, value) 
#puede agregar un nuevo elemento en cualquier lugar de la lista, no solo al final.
#el metodo insert al agregar un elemento desplaza el siguiente al otro indice

numbers = [111, 7, 2, 1]
print(numbers)
numbers.append(4)
numbers.insert(0, 222)
print(numbers)

#creacion de lista vacia y luego rellenarla

my_list = []  # Creando una lista vacía.

for i in range(5):
    my_list.append(i + 1)

print(my_list)

#crear lista al reves
print()

my_list = []  # Creando una lista vacía.
 
for i in range(5):
    my_list.insert(0, i + 1)
 
print(my_list)

# una forma de suemar listas sin contador, hay otra con contador pero es trivial
print()

my_list = [10, 1, 8, 3, 5]
total = 0
 
for i in my_list:  # con esta secuencia especial el for recorre todos los argumentos de la lista sin contador
    total += i
 
print(total)