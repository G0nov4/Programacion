lista = [43,65,65,34,57,24]
print(lista)

##   Iteramos sobre cada elemento de una lista

for x in lista:
    print(x)

## Otra forma de iterar

for i in range(len(lista)):
    print(f'Elemento de la lista {i}:',lista[i])

## Ultimo elemento

print(lista[-1])

# Lista por rangos

print(lista[2:5])

## REcorrido de lista al revez

print(lista[::-1])