import math
from decimal import *
    
getcontext().prec = 100
    
p, f = [Decimal(i) for i in input().split()]

a = Decimal(float(input()))

def do_snells(x):
    x = Decimal(x)
    theta1=Decimal(math.atan2(x, 1-a))
    theta2=Decimal(math.atan2(1-x, a))

    sin1 = Decimal(math.sin(theta1))
    sin2 = Decimal(math.sin(theta2))

    return f/p-sin2/sin1

def ternarySearch(l, r, key):
    for i in range(100):
         
        mid1 = Decimal(l + (r-l) / 3)
        mid2 = Decimal(r - (r-l) / 3)
 
        if key == do_snells(mid1):
            return mid1
        if key == do_snells(mid2):
            return mid2
 
        if key < do_snells(mid1):
            r = mid1
        elif key > do_snells(mid2):
            l = mid2
        else:
            l = mid1
            r = mid2
    return (mid1 + mid2)/2

print(round(ternarySearch(Decimal(0), Decimal(1), Decimal(0)), 9))