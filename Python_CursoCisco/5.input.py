                                      #Funcion input()
#Para leer datos del usuario 
#Forma 1
print("Dime lo que sea...")
anything = input()
print("Hmm...", anything, "... ¿en serio?")

#Forma alternativa
print()
anything = input("Dime lo que sea...")
print("Hmm...", anything, "...¿en serio?")

#el resultado de la función input() es una cadena, 
#no se debe utilizar como un argumento para operaciones matemáticas

#anything = input("Ingresa un número:")
#something = anything ** 2.0
#print(anything, "al cuadrado es", something) este códiga daría error

#Funcion int() y float()
print()
anything = float(input("Ingresa un número: "))
something = anything ** 2.0
print(anything, "a la potencia de 2 es", something)

#programa para calcular hipotenusa
print()
leg_a = float(input("Ingresa la longitud del primer cateto: "))
leg_b = float(input("Ingresa la longitud del segundo cateto: "))
hypo = (leg_a**2 + leg_b**2) ** .5
print("La longitud de la hipotenusa es:", hypo)

# los operadores + y * tambien se pueden usar con cadenas
# el operador + junta las cadenas
fnam = input("¿Me puedes dar tu nombre por favor? ")
lnam = input("¿Me puedes dar tu apellido por favor? ")
print("Gracias. ")
print("\nTu nombre es " + fnam + " " + lnam + ".")

# el operador * replica la misma cadena
print("+" + 10 * "-" + "+")
print(("|" + " " * 10 + "|\n") * 5, end="")
print("+" + 10 * "-" + "+")

#para pasar de un numero a una cadena usamos str()
# str(number)
