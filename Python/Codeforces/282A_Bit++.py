n =int(input())
x=0
for _ in range(n):
    cad = input()
    if cad.count('++') == 1:
        x+=1
    elif cad.count('--')== 1:
        x-=1
print(x)