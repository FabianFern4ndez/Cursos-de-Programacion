main::IO()
main = do
    putStrLn "Este programa calcula el area del rectangulo\n"
    --entrada
    putStr "Base: "
    baseStr <- getLine
    putStr "Altura: "
    alturaStr <- getLine
    --conversiones
    let base = read baseStr::Float
        altura = read alturaStr::Float
    --salida
    putStrLn $ "El area del rectangulo es " ++show base++ " * " ++show altura++ " = " ++show(areaRect base altura)

areaRect :: Float -> Float -> Float
areaRect x y = x*y


    