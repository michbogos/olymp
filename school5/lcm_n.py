import math
import decimal

context = decimal.getcontext()
context.prec = 100000

for i in range(int(input())):
    print(math.lcm(*[decimal.Decimal(i) for i in input().split()]))