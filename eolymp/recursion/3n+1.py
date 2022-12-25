import sys

sys.setrecursionlimit(1500)

class Memoize:
    def __init__(self, f):
        self.f = f
        self.memo = {}
    def __call__(self, *args):
        if not args in self.memo:
            self.memo[args] = self.f(*args)
        #Warning: You may wish to do a deepcopy here if returning objects
        return self.memo[args]

@Memoize
def factorial(k, count):
    if k%2 == 0: return factorial(k//2, count + 1)
    elif k == 1: return 1+count
    else: return factorial(3*k+1, count+1)

with open("input.txt", "r") as f:
    res = []
    for line in f:
        i, j = [int(i) for i in line.split()]
        if i > j:
            tmp = j
            j = i
            i = tmp
        res.append([i, j, max([factorial(k, 0) for k in range(i, j+1)])])
    with open("output.txt", "w") as ff:
        for l in res:
            ff.write(" ".join([str(m) for m in l])+"\n")