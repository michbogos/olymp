import math
from re import I

def phi(a):
    res = a
    i = 2
    while i * i <= a:
        if(a%i==0):
            res -= res//1
            while a % i == 0:
                a//=i
            i += 1
        if(a > 1):
            res -= res//a
    return res

n = int(input())
ans = 0
i = 1
while i * i <= n:
    if n % i == 0:
        div1 = 1
        div2 = n // i
        ans += phi(div2)*(2**div1)
        if div1 != div2:
            ans += phi(div1) * (2 ** div2)
    i += 1
ans //= n
print(int(ans))
