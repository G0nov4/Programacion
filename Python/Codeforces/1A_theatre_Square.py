v = [int(x) for x in input().split()]
ca = 0
ca1 = 0
if v[0] % v[2] == 0:
    ca=(v[0]/v[2])
else:
    ca=(v[0]//v[2]+1)
if v[1] % v[2] == 0:
    ca1=(v[1]/v[2])
else:
    ca1=(v[1]//v[2])+1
print(round(ca*ca1))