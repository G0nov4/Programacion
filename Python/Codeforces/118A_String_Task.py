n ,cad= input().lower(),''
for i in n:
    if not (i in ['a','e','i','o','u','y']):
        cad+='.'+i
print(cad)
