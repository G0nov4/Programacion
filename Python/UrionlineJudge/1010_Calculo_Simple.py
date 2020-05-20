producto_1 = input().split()
producto_2 = input().split()
total=int(producto_1[1])*float(producto_1[2])+int(producto_2[1])*float(producto_2[2])
print('VALOR A PAGAR: R$ %.2f'%total)