########################################
# Implementacion de conjuntos disjuntos
########################################

p = []
sz = []

def init(n):
	p = []
	sz = []
	for i in range(n + 1):
		p.append(i)
		sz.append(1)
	return p ,sz

def _find2(u):
	if u == p[u]:
		return u
	return _find2(p[u])

def _find(u):
	if u == p[u]:
		return u
	p[u] = _find(p[u])
	return p[u]

def _union(u, v):
	pu = _find(u)
	pv = _find(v)
	if pu == pv:
		return
	p[pu] = pv
	sz[pv] = sz[pv] + sz[pu]

print('Numero de elementos:  ',end = "")
n = int(input())
# Iniciamos las variables
p, sz = init(n)

print('Numero de preguntas:  ',end = '')
q=int(input())
while q > 0:
	line = input().split()
	_type = int(line[0])
	if _type == 1:
		# Union de conjuntos
		u = int(line[1])
		v = int(line[2])
		_union(u, v)
	elif _type == 2:
		# Verificar si estan en el mismo conjunto
		u = int(line[1])
		v = int(line[2])
		if _find(u) == _find(v):
			print('Yes')
		else:
			print('No')
	else:
		# Tamaño del conjunto
		u = int(line[1])
		print('Tamaño:  ',sz[_find(u)])
q =  q-1