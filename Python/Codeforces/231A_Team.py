n = int(input())
con=0
for _ in range(n):
    v1 = input().split()
    if v1.count('1') > 1:
        con+=1
print(con)