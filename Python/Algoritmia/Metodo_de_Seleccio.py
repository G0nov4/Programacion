'''
    Ordenamiento por seleccion
Es un algoritmo que consisite en ordenar los elementos de manera ascendente
o desendente

Funcionamiento:
-Buscar eldato mas pequeño de la lista
- Intercambiarlo por el actual
- Seguir buscando el mas pequeño de la lista
- Intercambiarlo por el actual
- Esto se repite sucesivamente
'''
lista = [6,5,7,7,5,3,5,3,6,7,2,1,3,4,5]

for i in range(len(lista)):
    minimo = i
    for x in range(i,len(lista)):
        if lista[x] < lista[minimo]:
            minimo = x
    aux = lista[i]
    lista[i] = lista[minimo]
    lista[minimo]=aux
print('-------------- Lista ya ordenada ---------------')
print(lista)