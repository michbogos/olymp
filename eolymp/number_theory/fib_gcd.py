from sys import stdin
import math

m = {}

m[0] = 0
m[1] = 1
m[2] = 1
m[3] = 2

def fib(n):
    if n == 0: return 0
    if n == 1: return 1
    if n == 2: return 1
    if n == 3: return 2
    if n in m:
        return m[n]

    (current, next, p, q) = (0, 1, 0, 1)    

    while (n > 0):
        m[n] = int(current)
        if n % 2 == 0:
            (p, q) = ((p*p + q*q)%(10**8), (q*q + 2*p*q)%(10**8))
            n //= 2
        else:
            (current, next) = ((p*current + q*next)%(10**8), (q*current + (p+q)*next)%(10**8))
            n -= 1
            
    return current

for line in stdin:
    print(fib(math.gcd(*[int(i) for i in line.split()]))%(10**8))

