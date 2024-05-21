{- Elabore un programa  que le solicite al usuario ingresar 2 números
 enteros,el primero debe ser de una cifra y el segundo debe ser de 2 
 cifras o más. El programa debe determinar si el valor de 2 cifras o más,
es o no múltiplo del otro valor ingresado. Debe mostrar la salida de la 
siguiente manera “El número___ es múltiplo de ___” o 
“El número ___ no es múltiplo de ___”. -}

main::IO()
main = do
    --entradas
    putStr "Entero de una cifra: "
    num1str <-getLine
    putStr "Entero de dos cifras: "
    num2str <-getLine
    --conversiones
    let num1 = read num1str::Int
    let num2 = read num2str::Int
    let num3 = mod num2 num1 --el operador mod se usa para el residuo
    if num3 == 0 --declaracion de if
        then putStrLn $ "El numero "++show num2++" es multiplo de "
                     ++show num1
        else putStrLn $ "El numero "++show num2++" no es multiplo de "
                     ++show num1
