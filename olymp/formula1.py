import math
n, a, b = [int(i) for i in input().split()]

a, b = sorted([a, b])

t = (2**n-1)*a
print(int(math.log2(t/b+1)))