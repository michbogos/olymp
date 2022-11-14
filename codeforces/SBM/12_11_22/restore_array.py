for _ in range(int(input())):
    n, x, y = [int(i) for i in input().split()]
    if n == 2:
        print(x, y)
        continue
    else:
        sol1 = [i for i in range(x, x+ (n+1)*((y-x)//n), (y-x)//(n))]
        res = []
        diff = y-x
        mn = 10e10
        step = 0
        for i in range(1, n+1):
            step = diff//i
            low = x//step
            if x - (step*low) <= 0:
                low -= 1
            low = min(n-i, low)
            x0 = x-(low*step)
            sol = [i for i in range(x0, x0+step*(n), step)]
            if x not in sol or y not in sol:
                continue
            if mn > max(sol):
                res = sol
                mn = max(sol)
        #if mn > max(sol1):
        #    res = sol1
        print(" ".join([str(i) for i in res]))