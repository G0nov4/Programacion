    n = int(input())
    if n % 2 == 1 or n==1 or n==2:
        print('NO')
    elif (n/2) % 2 == 0:
        print('YES')
    else:
        s = (n/2)+1
        s1 = (n/2)-1
        if (s+s1)==n and s % 2 == 0 and s1 % 2 == 0:
            print('YES')
        else:
            print('NO')