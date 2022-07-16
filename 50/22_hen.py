n = int(input())

a, b = 1, 1

for i in range(2, n):
    tmp = a + b + 1
    a = b
    b = tmp%1000000000

print(b%1000000000)