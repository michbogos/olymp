from bisect import bisect

def is_prime(n):
    i = 2
    if n == 2:
        return True
    while i*i < n:
        if n%i*i == 0:
            return False
        i += 1
    return True

def SieveOfEratosthenes(num):
    prime = [True for i in range(num+1)]
    p = 2
    while (p * p <= num):
        if (prime[p] == True):
            for i in range(p * p, num+1, p):
                prime[i] = False
        p += 1
    return prime

n = int(input())

p = SieveOfEratosthenes(1000004)

primes = []

for b, i in enumerate(p):
    if i: primes.append(b)

del primes[0]
del primes[0]

bs = bisect(primes, n)

a, b = (primes[bs-1], primes[bs])

if abs(n-primes[bs]) < abs(n-primes[bs-1]):
    print(primes[bs])
elif abs(n-primes[bs]) > abs(n-primes[bs-1]):
    print(primes[bs-1])
else:
    print(min(primes[bs-1], primes[bs]))