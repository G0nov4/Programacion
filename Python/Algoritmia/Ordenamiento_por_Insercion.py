'''
Ordenamiento de insercion

Funcionamiento:
- Recorre cada elemento de la lista
- Cada elemento de la lista se ordena si a su izquierda tiene un elemento mayor que el actual
- Si es correcto el paso anterior, se hace el intercambio de valores
- El elemento se sigue recorriendo hasta que el elemento de la iazquierda tenga un elemento menor que el.
'''
lista = [45,2,5,3,1,3,4,5,6,4,3,3]
for i in range(len(lista)):
    aux = lista[i]
    j = i-1
    while j >= 0 and aux < lista[j]:
        lista[j+1] = lista[j]
        lista[j] = aux
        j-=1
print(lista)
