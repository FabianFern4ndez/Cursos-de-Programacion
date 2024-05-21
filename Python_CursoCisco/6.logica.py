#  Operadores lógicos
# == igualdad  , != desigualdad, < > <= >= comparacion


#Usando uno de los operadores de comparación en Python, escribe un programa 
#simple de dos líneas que tome el parámetro n como entrada, que es un entero, 
#e imprime False si n es menor que 100, y True if n es mayor o igual que 100.

n = int(input("Ingresa un número: "))
print(n >= 100)

# condicionales if, else , elif
print()
# Se leen dos números
number1 = int(input("Ingresa el primer número: "))
number2 = int(input("Ingresa el segundo número: "))
 
# Elige el número más grande
if number1 > number2:
    larger_number = number1
else:
    larger_number = number2

 
# Imprime el resultado
print("El número más grande es:", larger_number)


# funcion max() y min() 
 # Se leen tres números.
number1 = int(input("Ingresa el primer número: "))
number2 = int(input("Ingresa el segundo número: "))
number3 = int(input("Ingresa el tercer número: "))
 
# Verifica cuál de los números es el mayor
# y pásalo a la variable largest_number.
 
largest_number = max(number1, number2, number3)
 
# Imprime el resultado.
print("El número más grande es:", largest_number)
 
