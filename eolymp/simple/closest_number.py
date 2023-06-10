import math
from decimal import *
getcontext().prec = 100

b, n = [Decimal(i) for i in input().split()]
i = 0
while n != 0:
    a = Decimal(1)/(b**n)
    print(int(a))
    b, n = [Decimal(i) for i in input().split()]