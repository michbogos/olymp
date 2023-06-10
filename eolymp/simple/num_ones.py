import math

a, b = [int(i) for i in input().split()]

print(math.ceil(math.log10(2.0)*b+1) - math.ceil(math.log10(2.0)*(a-1)))