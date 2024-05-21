#supon que tienes este codigo
row = []
for i in range(8):
    row.append(5)
    print(row[i])

# bueno esto puede comprimirse asi

a = [6 for i in range(8)]
print("")
for i in range(8):
    print(f"Numero {i+1} {a[i]}" )

#otro ejemplo
squares = [x ** 2 for x in range(10)]
odds = [x for x in squares if x % 2 != 0 ]
#este rellena con elementos impares