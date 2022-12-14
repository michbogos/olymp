def res(n, p):
    if n == 1:
        return 1
    else:
        return (res(n-1, p)+p-1)%n+1

print(res(*[int(i) for i in input().split()]))