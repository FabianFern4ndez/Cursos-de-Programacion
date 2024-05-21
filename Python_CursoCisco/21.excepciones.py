#digamos que programas una funcion que trabaja con naturales
#y al usuario le da por poner un string, puedes verificar 
#el tipo y luego continuar de esta forma
#  type(value) is int

#"es mejor manejar un error cuando ocurre que tratar de evitarlo". 
#excepciones con try-except
#try:
# codigo que se sospecha riesgoso y puede dar error (excepcion)
#except:
# codigo por si ocurre el error

try:
   value = int(input('Ingresa un número natural: '))
   print('El recíproco de', value, 'es', 1/value)        
except:
   print('Hubo un error')

#puedes agregarle al except el tipo de error especifico y tener mas de uno
#por ejemplo

#except ValueError:
#    ('No se que hacer con.')    
#except ZeroDivisionError:
#    print('La división entre cero no está permitida en nuestro Universo.')  
#except: este except es el default por si los otros casos no ocurren
#    print('Ha sucedido algo extraño, ¡lo siento!')

#¡el except por defecto debe ser el último except! ¡Siempre!

#excepciones utiles
#ZeroDivisionError
#ValueError
#TypeError
#AttributeError
#SyntaxError

