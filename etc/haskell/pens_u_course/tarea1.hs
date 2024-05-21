{-Validating Credit Card Numbers
In this section, you will implement the validation algorithm for
credit cards. It follows these steps:

• Double the value of every second digit beginning from the right.
That is, the last digit is unchanged; the second-to-last digit is dou-
bled; the third-to-last digit is unchanged; and so on. For example,
[1,3,8,6] becomes [2,3,16,6].
• Add the digits of the doubled values and the undoubled dig-
its from the original number. For example, [2,3,16,6] becomes
2+3+1+6+6 = 18.
• Calculate the remainder when the sum is divided by 10. For the
above example, the remainder would be 8.
If the result equals 0, then the number is valid.
-}

main::IO()
main = do
    putStr "Tarjeta: "
    n <- getLine
    let tarjeta_arr = stringToInt n
        arr_inv = revertirArreglo tarjeta_arr

    putStrLn $ "El arreglo es: " ++show tarjeta_arr
    putStrLn $ "El arreglo invertido es: " ++show arr_inv



--funcion para pasar string a int
stringToInt :: String -> [Int]
stringToInt = map (\c -> read [c] :: Int)
{-mucho texto lo que sigue
la funcion recibe un string y devuelve lista de enteros
map se usa para aplicar una funcion a una lista
\c es una funcion anonima, ya que era necesario para map
read es el clasico conversor de tipos--}


--funcion para revertir arreglo
revertirArreglo:: [a] -> [a]
revertirArreglo [] = []  -- Caso base: la lista vacía se revierte como lista vacía
revertirArreglo (x:xs) = revertirArreglo xs ++ [x]  -- Recursivamente construye la lista invertida

{-explicacion
la funcion toma una lista y devuelve otra
si la lista esta vacia devuelve una lista vacia (caso base)
si la lista tiene elementos separa el primer elemento
esto se represetna como x:xs 
y luego se aplica ella misma pero a los otros elementos y al final
se agrega el elemento representado por ++ [x]--}
