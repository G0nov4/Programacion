# Empezamos creando una lista de numero aleatorios de forma descendente
lista = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];
# definimos la funcion con 4 parametros (lista,inicio,final,numero_a_buscar)
def Busqueda_Binaria(dato):
    izq = 0
    der = len(lista)-1
    while izq <= der:
        medio = (izq+der)//2
        if dato == lista[medio]:
            return medio
        elif dato < lista[medio]:
            der = medio-1
        else:
            izq = medio+1
    return None

def Buscar(dato):
    if Busqueda_Binaria(dato) == None:
        print('No se encontro el dato en la lista ordenada')
    else:
        print('El dato se encontro en el indice ',Busqueda_Binaria(dato))
print(Buscar(11))
