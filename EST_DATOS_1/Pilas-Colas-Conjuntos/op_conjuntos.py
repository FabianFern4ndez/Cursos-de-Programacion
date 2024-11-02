B= set()

tamañoA = int(input("Tamaño de A: "))
tamañoB = int(input("Tamaño de B: "))

print("Añadir Elementos de A: ")
for i in range (0,tamañoA):
 	k = int(input(f"Elemento {i+1}:  "))
 	A.add(k);

print("Añadir Elementos de B: ")
for i in range (0,tamañoB):
 	k = int(input(f"Elemento {i+1}:  "))
 	B.add(k);

 #imprimir conjuntos iniciales
print("Conjunto A:")
print(A)
print("Conjunto B:")
print(B)


print("A U B =")
print(A | B)

print("A interseccion B = ")
print(A & B)

print("A - B")
print(A - B)