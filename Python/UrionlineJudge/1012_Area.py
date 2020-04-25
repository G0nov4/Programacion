pi = 3.14159
v = [float(x) for x in input().split()]
print('TRIANGULO: %.3f' % (v[0]*v[2]/2))
print('CIRCULO: %.3f' % (pi*(v[2]**2)))
print('TRAPEZIO: %.3f' % (v[2]*(v[1]+v[0])/2))
print('QUADRADO: %.3f' % (v[1]*v[1]))
print('RETANGULO: %.3f' % (v[0]*v[1]))
