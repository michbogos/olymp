a, b, c = [int(i) for i in input().split()]
d, e, f = [int(i) for i in input().split()]

if sorted([a, b, c]) == sorted([d, e, f]):
    res = sorted([a, b, c])
    if res[0]**2+res[1]**2==res[2]**2:
        print("YES")
    else:
        print("NO")
else:
    print("NO")