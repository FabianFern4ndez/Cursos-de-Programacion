{-voy a hacer un programa que acumule 5 numeros y
me de el promedio con un contador-}
main::IO()
main = do
    (x,y) <- pedirNumero 0 0
    putStrLn $ "Conteo : " ++show y 
    putStrLn $ "Suma: " ++show x
    --para hacer el promedio tendria que convertir y me da pereza

-- en esta funcion esta el acumulador y el contador
pedirNumero:: Int -> Int -> IO (Int, Int)
pedirNumero y acumAux = do
    putStr "Numero "
    var <- getLine
    let num = read var::Int
    let cont = y + 1 --contador
    let acum = acumAux + num --acum

    if cont < 5 --cuenta hasta 5
        then pedirNumero cont acum
        else return (acum, cont) 