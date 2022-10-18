import math

n, k = [int(i) for i in input().split()]
buckets = [int(i) for i in input().split()]

buckets.sort()

if buckets[-1] > k:
    print("Impossible")
else:
    l, res = [0, 0]
    r = n-1
    while r >= l:
        if a[l] + a[r] <= k:
            res+= 1
            l+= 1
        r -=1
    print(res)
