a, b = [int(i) for i in input().split()]
n = b-a

prime = [True for i in range(n + 3)]
p = 2
while (p * p <= n+3):
    if (prime[p] == True):
        for i in range(p ** 2, n + 3, p):
            prime[i] = False
    p += 1
prime[0]= False
prime[1]= False
for p in range(n + 3):
    if prime[p]:
            print(p,end=' ')