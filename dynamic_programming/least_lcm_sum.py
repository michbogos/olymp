import math

s = []

while (n := int(input())) != 0:
    m = n + 1
    i = 2
    while i**2 <= n:
        if n % i == 0:
            if m > (math.gcd(n // i)+ i):
                m = (math.gcd(n // i)+ i)
        i += 1
    s.append(m)

for i in range(len(s)):
    print("Case " + str(i+1) + ":" + " " + str(s[i]))

print(math.gcd(*[int(i) for i in input().split()]))
