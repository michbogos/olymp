for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()][::-1]
    arr0 = arr[::-1]
    idx1 = -1
    try:
        idx1 = arr.index(1)
    except:
        pass
    idx0 = -1
    try:
        idx0 = arr0.index(0)
    except:
        pass
    
    arr[idx1] = 0
    arr0[idx0] = 1
    arr0 = arr0[::-1]
    prefix = []
    count = 0
    sol = 0
    mx = 0
    for i in range(n):
        if arr[i] == 0:
            count += 1
        prefix.append(count)
        if arr[i] == 1:
            count += prefix[-1]
    mx = max(count, mx)
    prefix = []
    count = 0
    sol = 0
    mx = 0
    for i in range(n):
        if arr0[i] == 0:
            count += 1
        prefix.append(count)
        if arr0[i] == 1:
            count += prefix[-1]
    mx = max(count, mx)

    print(mx)