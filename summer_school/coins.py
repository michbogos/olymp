a, b, k = [int(i) for i in input().split()]

def f(n):
    return a*int(n) + b* len(str(int(n)))

l = 0
r = 10e9
for i in range(50):
    mid = (r+l)//2
    if f(mid) <= k:
        l = mid
    if f(mid) > k:
        r = mid

if l >  k:
    print(int(r))
    exit()
if r > k:
    print(int(l))
else:
    print(int(mid))