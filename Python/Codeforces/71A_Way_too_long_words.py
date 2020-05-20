n = int(input())
for _ in range(n):
    cad = input()
    if len(cad)>10:
        print(cad[0]+str(len(cad[1:-1]))+cad[-1])
    else:
        print(cad)