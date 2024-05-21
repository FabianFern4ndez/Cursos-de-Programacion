#Operaciones con listas
# este fragmento de codigo da 2 en vez de 1
list_1 = [1]
list_2 = list_1
list_1[0] = 2
print(list_2)
#   el nombre de una variable ordinaria es el nombre de su contenido;
#   el nombre de una lista es el nombre de una ubicación de memoria donde se almacena la lista.
#   La asignación: list_2 = list_1 copia el nombre del arreglo no su contenido

# con el operador [:] puedes copiar el contenido de la lista y no su nombre
list_1 = [1]
list_2 = list_1[:]
list_1[0] = 2
print(list_2)

#sintaxis my_list[inicio:fin] 
my_list = [10, 8, 6, 4, 2]
new_list = my_list[1:3]
print(new_list)

# al usar este operador con del, se borra el contenido de la lista y no la lista
my_list = [10, 8, 6, 4, 2]
del my_list[:]
print(my_list)

#operadores in not in verifican si el valor se encuentra en la lista, devuelven VF

my_list = [0, 3, 12, 8, 2]

print(5 in my_list)
print(5 not in my_list)
print(12 in my_list)

#algoritmos simples
# encontrar el mayor valor de la lista
my_list = [17, 3, 11, 5, 1, 9, 7, 15, 13]
largest = my_list[0]

for i in range(1, len(my_list)):
    if my_list[i] > largest:
        largest = my_list[i]

print(largest)


# encontrar la ubicacion de un numero en una lista
my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
to_find = 5
found = False
 
for i in range(len(my_list)):
    found = my_list[i] == to_find
    if found:
        break
 
if found:
    print("Elemento encontrado en el índice", i)
else:
    print("ausente")

# encontrar la cantidad de intersecciones en una lista

drawn = [5, 11, 9, 42, 3, 49]
bets = [3, 7, 11, 42, 34, 49]
hits = 0
 
for number in bets:
    if number in drawn:
        hits += 1
 
print(hits)
 

