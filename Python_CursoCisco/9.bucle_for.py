# bucle for
#nota, el valor de range empieza a contar desde cero

for i in range(10):
    print("El valor de i es", i)
pass

print()

for i in range(2, 8):   #en este caso le podemos dar un valor inicial y final
    print("El valor de i es", i)
    pass  # este pass marca el final, no es necesario pero me gusta :)

print()
  # el ultimo argumento sirve para determinar el incremento
for i in range(2, 9, 3):
    print("El valor de i es", i)


#funciones break y continue
print()
# break - ejemplo

print("La instrucción break:")
for i in range(1, 6):
    if i == 3:
        break
    print("Dentro del bucle.", i)
print("Fuera del bucle.")


# continue - ejemplo

print("\nLa instrucción continue:")
for i in range(1, 6):
    if i == 3:
        continue
    print("Dentro del bucle.", i)
print("Fuera del bucle.")
