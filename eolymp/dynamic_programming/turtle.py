m, n = [int(i) for i in input("").split()]

class Memoize:
    def __init__(self, f):
        self.f = f
        self.memo = {}
    def __call__(self, *args):
        if not args in self.memo:
            self.memo[args] = self.f(*args)
        return self.memo[args]

@Memoize
def recursive(i, j):
    if i == 1 or j == 1:
        return 1
    else:
        return recursive(i-1, j) + recursive(j-1, i)

print(recursive(m, n))
