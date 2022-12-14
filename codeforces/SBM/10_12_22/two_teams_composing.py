for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    s = set(arr)
    m = {}
    for i in arr:
        try:
            m[i] += 1
        except:
            m[i] = 1
    mx = 0
    for key in m:
        mx = max(m[key], mx)

    print(max(min(len(s)-1, mx), min(len(s), mx-1)))