for _ in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    arr.insert(0, 10e10)
    arr.append(10e10)
    mx = max(arr)
    indices = [i for i, x in enumerate(arr) if x == mx]
    del indices[0]
    del indices[-1]
    f = False
    for i in indices:
        try:
            if arr[i+1] < arr[i] or arr[i-1] < arr[i]:
                f=True
                print(i)
                break
        except:
            continue
    if not f:
        print(-1)