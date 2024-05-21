
main :: IO()
main = do --estas dos lineas son el cuerpo del programa principal

    putStrLn "Hola cual es tu nombre"
    var <- getLine --ojo que getLine es solo para tipo cadena

    putStrLn $  "Bienvenido a Haskell, " ++ var
    putStrLn("Otra forma de darte la bienvenida "++var)
    {-El simbolo $ representa aplicacion de una funcion sobre otra
    otra forma de escribirlo era putStrLn ("Bienvenido ", ++var)-}

    sumarNumeros --Asi se llaman a las funciones

sumarNumeros :: IO ()
sumarNumeros = do

    putStrLn "Ingresa el primer número:"
    num1Str <- getLine
    putStrLn "Ingresa el segundo número:"
    num2Str <- getLine --fijate que pide los numeros como string
    --en haskell no se puede pedir la entrada como numero, solo cadena

    let num1 = read num1Str :: Int --la funcion read puede convertir tipos
        num2 = read num2Str :: Int -- en este caso pasa de string a Int
        resultado = num1 + num2
    putStrLn $ "La suma de los números es: " ++ show resultado
    putStrLn ("El resultado es: " ++ show resultado)
-- ojo con la funcion show  
-- en haskell no se pueden imprimir numeros, hay que transformarlos primero a cadenas
-- tambien se puede usar print, pero el problema es que no borra las comillas