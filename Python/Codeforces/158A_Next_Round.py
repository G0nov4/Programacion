v = [int(x) for x in input().split()]
v1 = [int(x) for x in input().split()]
con=0
for i in v1:
    if i >= v1[v[1]-1] and i != 0:
        con+=1
print(con)