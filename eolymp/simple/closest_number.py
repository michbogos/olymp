a, n = [int(i) for i in input().split()]
i = 0
while n != 0:
    i += 1
    l = 0
    r = a
    mid = (l+r)//2
    while r-l > 0:
        mid = (l+r)//2
        if mid**n <= a:
            l = mid+1
        else:
            r = mid
    l = [abs(a-l**n), abs(a-mid**n), abs(a-r**n)]
    res = [l, mid, r]
    print(res[l.index(min(l))])
    
    a, n = [int(i) for i in input().split()]