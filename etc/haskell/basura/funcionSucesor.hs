suc :: Int -> Int
suc x = x + 1
{- aclaraciones:
si solo haces suc x = x + 1 el programa funciona pero haskell asume el tipo de dato
esto se debe a que haskell es fuertemente tipado

el comando :t <nombre> nos permite ver el tipo de la funcion

suc :: Int -> Int
significa que recibe un entero y devuelve un entero

Int -> Int -> Int
esta notacion significa, recibe un entero, recibe otro entero y dvuelve un entero
-}
sumaCuadrados :: Int -> Int -> Int
sumaCuadrados x y = x*x + y*y


