n = int(input())

def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

product = 1

factors = prime_factors(n)

for i in factors:
    product *= factors.count(i) + 1

print(product)
