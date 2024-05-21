{- Elabore un programa que, dada una hora, 
el programa indique a cuánto equivalen esas horas en minutos y 
a cuánto equivalen en segundos. -}

main::IO()
main = do
    putStrLn "Conversion de hora"
    putStr "Cantidad de Horas: "
    horastr <- getLine
    let horas = read horastr::Float
    putStrLn $  show horas ++ " equivalen a " ++ show (convMinutos horas) ++ 
                " minutos y a " ++ show (convSegundos horas)++ " segundos"


convMinutos::Float -> Float
convMinutos x = x * 60

convSegundos::Float -> Float
convSegundos x = (convMinutos x) * 60