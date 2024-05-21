-- este es un comentario de una linea
{-
este es un comentario de varias lineas
-}

miNumeroFavorito :: Integer
miNumeroFavorito = 3

miNumeroDecimalFavorito :: Float
miNumeroDecimalFavorito = 2.57

miInicial :: Char
miInicial = 'A' 
-- para los caracteres no se vale " " solo ' '

tuNombre :: [char] -- eso significa string
tuNombre = "Fabian"

tuOtroNombre :: [char]
tuOtroNombre = ['F','A','B','I','A','N']

listaDeNumeros ::[Integer]
listaDeNumeros = [1,2,3,4,5]

tuplaDeCoordenadas ::(Integer, Integer)
tuplaDeCoordenadas = (1,2)

anadirElementoLista :: [a] -> a -> [a]
añanadirElementoLista l e = l:e


