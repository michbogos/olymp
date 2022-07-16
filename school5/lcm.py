import math
import functools
for i in range(int(input())):
    print(functools.reduce(math.lcm, [int(i) for i in input().split()]))