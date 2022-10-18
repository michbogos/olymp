from decimal import *

getcontext().prec = 30

# use binary or ternary search

a, b, c, d = [Decimal(float(i)) for i in input().split()]

# a * 3 * x ** 2 + b * 2 * x + c

x = Decimal(1000)

for i in range(100):
    x1 = x - ((a * x ** 3 + b * x ** 2 + c * x + d)/(a * 3 * x ** 2 + b * 2 * x + c))
    x = x1

high = x

x = Decimal(-1000)

for i in range(100):
    x1 = x - ((a * x ** 3 + b * x ** 2 + c * x + d)/(a * 3 * x ** 2 + b * 2 * x + c))
    x = x1

low = x

print((low + high)/2)
