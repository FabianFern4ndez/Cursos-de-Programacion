main :: IO ()
main = do
    putStrLn "Hola, ¿cuál es tu nombre?"
    var <- getLine
    putStrLn $ "Bienvenido a Haskell, " ++ var
    repetirSuma

repetirSuma :: IO ()
repetirSuma = do
    sumarNumeros
    putStrLn "¿Deseas sumar otros dos números? (Sí/No)"
    respuesta <- getLine
    if respuesta == "Sí" || respuesta == "si" || respuesta == "sí"
        then repetirSuma --forma recursiva
        else putStrLn "¡Hasta luego!"

sumarNumeros :: IO ()
sumarNumeros = do
    putStrLn "Ingresa el primer número:"
    num1Str <- getLine
    putStrLn "Ingresa el segundo número:"
    num2Str <- getLine
    let num1 = read num1Str :: Int
        num2 = read num2Str :: Int
        resultado = num1 + num2
    putStrLn $ "La suma de los números es: " ++ show resultado
