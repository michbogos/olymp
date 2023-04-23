from sys import stdin
import math

def fib(n):
    even = lambda n: (n % 2 == 0)

    (current, next, p, q) = (0, 1, 0, 1)    

    while (n > 0):
        if (even(n)):
            (p, q) = (p**2 + q**2, q**2 + 2*p*q)
            n /= 2
        else:
            (current, next) = (p*current + q*next, q*current + (p+q)*next)
            n -= 1
    
    return current

for line in stdin:
    print(fib(int(line)))

