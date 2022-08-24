import math

n, m, a, b = [int(i) for i in input().split()]

factor = math.gcd(a, b)

factora = a//factor
factorb = b//factor


print(factora * min(n//factora, m//factorb), factorb * min(n//factora, m//factorb))