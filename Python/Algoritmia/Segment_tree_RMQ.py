# Python3 programa del rango minimo de una consulta
# consulta usando segment tree
import sys;
from math import ceil, log2;

INT_MAX = sys.maxsize;


# una funcion para obtener
# valor minimo de 2 valores
def minVal(x, y):
    return x if (x < y) else y;


# una funcion pra obtener el
# indice medio de lo indice de esquina
def getMid(s, e):
    return s + (e - s) // 2;

"""
Una función recursiva para obtener el
valor mínimo en un rango dado
de índices de matriz. El seguimiento
son parámetros para esta función.

st -> Puntero al árbol de segmentos

index -> Índice del nodo actual en el
árbol de segmentos Inicialmente 0 es
pasado como root siempre está en el índice 0

ss & se -> Índices iniciales y finales
del segmento representado
por nodo actual, es decir, st [índice]

qs & qe -> Índices iniciales y finales del rango de consulta """


def RMQUtil(st, ss, se, qs, qe, index):
    # Si el segmento de este nodo es una parte
    # del rango dado luego regrese
    # el minimo del segmento
    if (qs <= ss and qe >= se):
        return st[index];

    # si el segmento de este nodo
    # esta fuera del rango dado
    if (se < qs or ss > qe):
        return INT_MAX;

    # Si una parte de este segmento
    # se superpone con el rango dado
    mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs,qe, 2 * index + 1),
                  RMQUtil(st, mid + 1, se,qs, qe, 2 * index + 2));


    # Altura del árbol de segmentos
    x = (int)(ceil(log2(n)));

    # Tamaño máximo del árbol de segmentos
    max_size = 2 * (int)(2 ** x) - 1;

    st = [0] * (max_size);

    # Rellene la memoria asignada st
    constructSTUtil(arr, 0, n - 1, st, 0);

    # Devuelve el árbol de segmento construido
    return st;


# Codigo del constructor
if __name__ == "__main__":
    arr = [1, 3, 2, 7, 9, 11];
    n = len(arr);
    # Construir árbol de segmentos a partir de una matriz dada

    st = constructST(arr, n);

    qs = 1;  # Starting index of query range
    qe = 5;  # Ending index of query range

    # Print minimum value in arr[qs..qe]
    print("Minimum of values in range [", qs,
          ",", qe, "]", "is =", RMQ(st, n, qs, qe));

# This code is contributed by AnkitRai01
