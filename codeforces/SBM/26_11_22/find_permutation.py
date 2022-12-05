for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    s = set([])
    sol = []
    for i in arr:
        if i not in s:
            sol.append(i)
            s.add(i)
    print(" ".join(str(i) for i in sol))