#matrices
board = []
 
for i in range(8): #filas
    row = [i for i in range(8)] #columnas
    board.append(row)
    print(board[i]) #impresion de matriz

#otra forma de definirlo
print()
               #filas                      #columnas
board = [[i+1 for i in range(8)] for j in range(8)]

#puedes agregar elementos perzonalizados

# board[4][2] = "no se"

# Imagina que desarrollas una pieza de software para una estación 
#  meteorológica automática. El dispositivo registra la temperatura
#  del aire cada hora y lo hace durante todo el mes. Esto te da un 
# total de 24 × 31 = 744 valores. Intentemos diseñar una lista capaz
#  de almacenar todos estos resultados.

#temps = [[0.0 for h in range(24)] for d in range(31)]
#el 0.0 es como declarar tipo float
#h representa las filas horas
#d reperesenta columnas o dias



