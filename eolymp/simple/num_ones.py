import math

a, b = [int(i) for i in input().split()]

print(math.floor(math.log10(2.0)*b+1) - math.floor(math.log10(2.0)*(a-1)+1))