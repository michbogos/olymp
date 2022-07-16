import math

m, n = [int(i) for i in input().split()]

s = min(m, n) + math.lcm(max([m, n])-min([m, n]), min([m, n]))

print(s)
