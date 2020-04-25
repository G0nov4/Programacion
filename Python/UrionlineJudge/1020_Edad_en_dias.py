n= int(input())
print((n//365),'ano(s)')
n=n%365
print((n//30),'mes(es)')
n = n % 30
print((n),'dia(s)')