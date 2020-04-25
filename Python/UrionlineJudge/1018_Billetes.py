n = int(input())
list=(100,50,20,10,5,2,1)
print(n)
for i in list:
    print((n//i),'nota(s) de R$',str(i)+',00')
    n=n%i