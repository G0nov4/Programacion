'''
Método de ordenamiento Burbuja
Revisa cada elemento con el siguiente elemento de la lista, Intercambiando de posicion
si estan en el orden equivocados

'''
lista = [4,3,5,2,6,1]
print('######## Lista original ###########')
print(lista)
for i in range(len(lista)):
    for x in range(len(lista)-1):
        if lista[x] > lista[x+1]:
            aux = lista[x]
            lista[x] =  lista[x+1]
            lista[x+1] = aux
print('############ Lista ya ordenada #########')
print(lista)