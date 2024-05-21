#el diccionario es otra estructura como una lista mutable
#los elementos se almacenan en pares a:b , c:d

dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
phone_numbers = {'jefe': 5551234567, 'Suzy': 22657854310}
empty_dictionary = {}
 
print(dictionary)
print(phone_numbers)
print(empty_dictionary)

#la funcion len() regresaria la cantidad de pares

#cuando se imprime un elemento de una clave(a) de un un diccionario
#devuelve su valor(b)

print(dictionary['gato'])
# print(dictionary['chat']) esto daria error porque no es la clave

print()
# uso de diccionarios
dictionary = {"gato": "gato", "perro": "chien", "caballo": "cheval"}
words = ['gato', 'león', 'caballo']
 
for word in words:
    if word in dictionary:
        print(word, "->", dictionary[word])
    else:
        print(word, "no está en el diccionario")

#si el diccionario es muy grande puedes definirlo asi
dictionary = {
              "gato": "chat",
              "perro": "chien",
              "caballo": "cheval"
}

#metodos y funciones con diccionarios
#keys() retorna o regresa una lista de todas las claves dentro 
# del diccionario
print()
dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
 
for key in dictionary.keys():
    print(key, "->", dictionary[key])
    
#metodo items()
print()
dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
 
for spanish, french in dictionary.items():
    print(spanish, "->", french)
    
#modificar valores
print()

dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
dictionary['gato'] = 'minou'
print(dictionary)

print()

#agregar elemento
dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
dictionary['cisne'] = 'cygne'
print(dictionary)
#tambien se puede usar el metodo update dictionary.update({"pato": "canard"})

#eliminar clave
print()
dictionary = {"gato": "chat", "perro": "chien", "caballo": "cheval"}
del dictionary['perro']
print(dictionary)

#Para comprobar si una clave existe en un diccionario, se puede emplear la palabra clave reservada in:
 

 

 
#funcion sorted(), para ordenar
# for key in sorted(dictionary.keys()):
