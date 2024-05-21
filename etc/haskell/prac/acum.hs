{-Elabore un programa  que solicite números, el programa debe
 detenerse cuando se ingrese un número negativo y debe presentar 
 la sumatoria y el promedio de los números ingresados-}

                       --pendiente
main :: IO ()
main = do
    (suma, cont) <- pedirNumero 0.0 0
    putStrLn $ "Resultado: " ++ show suma
    putStrLn $ "Contador: " ++ show cont
    let contFloat = fromIntegral cont::Float
    let prom = suma/contFloat
    putStrLn $ "Promedio: " ++show prom

pedirNumero :: Float -> Int -> IO (Float, Int)
pedirNumero acc cont = do
    putStr "Entrada: "
    input <- getLine
    let num = read input :: Float

    if num > 0
        then do
            let newAcc = acumulador num acc 
            pedirNumero newAcc (contador num cont)
        else return (acc, cont)

acumulador :: Float -> Float -> Float
acumulador x acc = 
    if x /= 0
        then x + acc
        else acc 

contador :: Float -> Int -> Int
contador x y =
    if x /= 0
        then y + 1
        else y



