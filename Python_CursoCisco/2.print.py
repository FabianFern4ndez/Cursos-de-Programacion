                                       #Exploracion de la funcion print

print("Hola soy yo")
print()
print("como estás")
print()
# los comentarios inician con este hashtag
# otra forma de salto de linea

print("Hola soy yo \n \nComo estas")

# las comas separan las cadenas
print("\nHola" , "como estas")

#Python perimite usar apostrofe en vez de comillas, es util si quieres incluir comillas en el texto
print()
print('Mi nombre es "Monty Python"')


#palabra clave end
print()
print("Mi nombre es", "Python.", end=" ")
print("Monty Python.")

#palabra clave sep
#La función print() ahora usa un guión, en lugar de un espacio, para separar los argumentos de salida.
print("Mi", "nombre", "es", "Monty", "Python.", sep="-")

#ejemplo combinado
print()
print("Programming","Essentials","in", sep="***", end="...")
print("Python")

                                       #Exploración de tipos de valores

#python puede imprimir constantes sin las comillas
print()
print(6)
print(6.5)

#tambien puede imprimir negativos
print()
print(-6)

#puede imprimir octales poniendo 0o  (cero-o)
print()
print("Al imprimir el octal 123 se obtiene un valor decimal de: " , end=" ")
print(0o123)

#puedes imprimir hexadecimales ponniendo 0x (cero-equis)
print()
print("Al imprimir el hexadecimal 123 se obtiene el decimal de: ", end=" ")
print(0x123)

#python permite la notación científica usando e para representar 10 a la n
print()
print(3e8)

#Python siempre elige la presentación más corta del número
#mira lo que pasa al imprimir 0.0000000000000000000001
print()
print(0.0000000000000000000001)

#Los booleanos se escriben True False