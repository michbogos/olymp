a, b, k = [int(i) for i in input().split()]

def f(n):
    return a*int(n) + b* len(str(int(n)))

l = 0
r = 10e9
for i in range(50):
    mid = (r+l)//2
    if f(mid) <= k:
        l = mid
    else:
        r = mid

if l <  k and r < k:
    print(max(int(r), int(l)))
    exit()
else:
    print(int(mid))