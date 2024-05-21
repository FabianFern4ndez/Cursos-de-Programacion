#listas, arreglos
#se enumeran desde cero
numbers = [10, 5, 7, 2, 1]

print("Contenido de la lista:", numbers)  # Imprimiendo contenido de la lista original.
 
numbers[0] = 111 #con esto ajustamos los valores de la lista
print("Nuevo contenido de la lista: ", numbers)  # Contenido actual de la lista.

#la operación de seleccionar un elemento de la lista se conoce como indexación.
numbers[1] = numbers[4]  # podemos copiarlos y cambiarlos
print("Nuevo contenido de la lista:", numbers)  # Imprimiendo el contenido de la lista actual.

#asi se accede a un numero individual de la lista
print(numbers[0]) # Accediendo al primer elemento de la lista.

#asi determinamos la longitudo de la lista len()
print("\nLongitud de la lista:", len(numbers))

#con la funcion del() podemos eliminar un elemento de la lsta
print()
del numbers[1]
print(len(numbers))
print(numbers)

#puedes usar numeros negativos para indexar el arreglo pero se cuentan desde el ultimo numero hasta el primero
print(numbers[-1])
 
