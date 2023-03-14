n = int(input())

if n == 1:
    print(1)
    exit()
for i in range(32):
    if n < (1 << i):
        if (1 << (i-2))*3 <= n:
            print((1 << (i-2))*3)
        else:
            print(1<<(i-1))
        break