U = {1,2,3,4,5,6,7,8,9,10}
A = set()
print("Este programa calcula la funcion caracteristica")
print("")
print("El conjunto universal está formado por los elementos 1 2 3 4 5 6 7 8 9 10")
print("")
n = int(input("Cuantos valores desea agregar al subconjunto: "))
print("Para formar un subconjunto solo introduzca los valores de forma ordenada")
for i in range(n):
	k = int (input(f"Elemento {i+1}: "))
	A.add(k)

def funcion_caracteristica(U, A):
    for i in U:
        if i in A:
            print(1, end=" ")
        else:
            print(0, end=" ")

print("La función característica del subconjunto es:")
funcion_caracteristica(U, A)

