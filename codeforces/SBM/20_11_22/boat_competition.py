for _ in range(int(input())):
    n = int(input())
    unique = set([int(i) for i in input().split()])
    d = {}
    for a in unique:
        for b in unique:
            try:
                d[a+b] += 1
            except:
                d[a+b] = 1
    
    mx = -10e10
    k = -1
    for key, value in d.items():
        if value > mx:
            mx = value
            k = key
    print(k, mx)