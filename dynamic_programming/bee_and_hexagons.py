n = int(input())

a, b = 1, 1

if n < 3:
    print(1)
else:
    for i in range(n-2):
        c = a + b
        a = b
        b = c
    print(c)