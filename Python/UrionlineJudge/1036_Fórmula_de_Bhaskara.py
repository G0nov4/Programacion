a,b,c= [float(x) for x in input().split()]
ver = (b**2)-4*(a)*(c)
if ver >= 0 and a != 0:
    ec1 = (-b + (ver ** .5)) / (2 * a)
    ec2 = (-b - (ver ** .5)) / (2 * a)
    print('R1 = %.5f' % ec1)
    print('R2 = %.5f' % ec2)
else:
    print('Impossivel calcular')