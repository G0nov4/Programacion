# Empezamos creando una lista de numero aleatorios de forma descendente
lista = [1,2,3,4,5,6,7,8,9,12,15,17,19,28,39,41,42,43,54,56,57]

# definimos la funcion con 4 parametros (lista,inicio,final,numero_a_buscar)

def Busqueda_Binaria(lista,inicio,final,x):
    med = (inicio+final)//2
    if lista[med] == x:
        return med
    if lista[]