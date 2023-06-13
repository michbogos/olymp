n = int(input())
i = 0
while n != 0:
    i += 1
    l = 0
    r = 2*n
    mid = (l+r)//2
    while l != r :
        mid = (l+r)//2
        if (mid*(mid-3))//2 < n:
            l = mid+1
        else:
            r = mid
    print(f"Case {i}: {l}")
    n = int(input())