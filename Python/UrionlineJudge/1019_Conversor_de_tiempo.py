n = int(input())
list = (3600,60)
for i in list:
    print((n//i),end=':')
    n=n%i
print(n)