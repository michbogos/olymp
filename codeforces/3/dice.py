import math
for _ in range(int(input())):
    n, s, r = [int(i) for i in input().split()]
    mx = s-r
    n -= 1
    arr = [mx]

    while(r > 0):
        arr.append(math.floor(r/n))
        r -= arr[-1]
        n -= 1

    arr.sort()

    for i in range(len(arr)-1):
        sm = sum(arr)
        if(sm==s):
            break
        else:
            arr[i] = max(1, arr[i]-(s-sm))

    
    print(" ".join([str(i) for i in arr]))