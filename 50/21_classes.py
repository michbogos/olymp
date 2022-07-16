import math
n, a, b, m = [int(i) for i in input().split()]

print(math.ceil(m/((a*b)//n)))