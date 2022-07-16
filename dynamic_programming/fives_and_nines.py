n = int(input())

a, b = 2, 4

if n < 2:
    print(a)
elif n < 3:
    print(b)
else:
    for i in range(n-2):
        c = a + b
        a = b
        b = c

    print(c)