import math
a, b = sorted([int(i) for i in input().split()])
p, q = sorted([int(i) for i in input().split()])

if (p <= a and q <= b) or (p > a and b >= (2*p*q*a + (p*p-q*q)*math.sqrt(p*p+q*q-a*a)) / (p*p+q*q)):
    print("Possible")
else:
    print("Impossible")