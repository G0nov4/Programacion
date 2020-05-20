'''
Busqueda Lineal

Funcionamiento:
1) Recorrer cada elemento de una lista
2 Ir comparando cada elemetno
3 retornar 0 o-1 si llegamos al final de la lista y no lo encontramos
'''
def Busqueda_Lineal(dato):
    for i in range(len(lista)):
        if lista[i]==dato:
            return i
    return None
def Buscar(dato):
    if Busqueda_Lineal(dato) == None:
        return "El dato no se encontro"
    else:
        return "El dato se encontro en el indice",Busqueda_Lineal(dato)
    pass

lista=[3,4,5,6,5,5,5,4,44,32442,234,24,5,4353,4564,5]
for i in range(len(lista)):
    print('[%d]    =>    [%d]'%(i,lista[i]))
print(Buscar(1))
print(Buscar(44))
