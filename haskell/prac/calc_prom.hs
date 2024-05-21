main:: IO()
main = do
    putStrLn $ "Este programa, calcula un promedio de tres notas"
    --entrada
    putStrLn "Nota 1: "
    var1str <- getLine
    --para no hacer un salto de linea usar la f putStr
    putStr "Nota 2: "
    var2str <- getLine
    putStr "Nota 3: "
    var3str <- getLine
    --conversion
    let var1 = read var1str::Float
        var2 = read var2str::Float
        var3 = read var3str::Float
    
    putStrLn $ "El promedio es: " ++ show (promediar var1 var2 var3)


promediar::Float -> Float -> Float -> Float
promediar n1 n2 n3 = (n1+n2+n3)/3
--notese que aqui no hay = do porque eso me obligaria a poner entrada y salida



