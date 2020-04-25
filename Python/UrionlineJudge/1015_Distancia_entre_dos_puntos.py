x1 = [float(x) for x in input().split()]
y1 = [float(x) for x in input().split()]
sum=(y1[0]-x1[0])**2
sum1=(y1[1]-x1[1])**2
print('%.4f'%((sum+sum1)**(1/2)))
