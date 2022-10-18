n = int(input())

sols = [1, 2, 3, 4, 5]

def factors(x):
    fs = []
    i = 0
    flag = False
    while x > 1:
        flag = False
        if i > 1 and x % i == 0:
            fs.append(i) 
            x //= i
            flag = True
        if not flag:
            i += 1
    return fs


def solve(n):
    if n < 6:
        print(sols[n-1])
    if n >= 6:
        for u in range(5, n):
            f = factors(u+1)
            s = 0
            if len(f) > 1:
                for fac in f:
                    s += sols[fac-1]
                sols.append(s)
            else:
                sols.append(sols[u-1]+1)
            
solve(n)
print(sols[-1])
