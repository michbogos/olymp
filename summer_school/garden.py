n,m = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
a.append(10e30)
b.append(10e30)
s = []

while len(s) < n+m:
    if a[0] < b[0]:
        s.append(1)
        print(a[0], end=" ")
        del a[0]
    else:
        s.append(1)
        print(b[0], end=" ")
        del b[0]