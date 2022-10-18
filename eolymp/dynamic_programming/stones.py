n, m = [int(i) for i in input().split()]

if n % (m+1) == 0:
    print(0)
else:
    print(n%(m+1))
