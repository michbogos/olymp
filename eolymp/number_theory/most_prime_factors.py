n = int(input())

for i in range(32):
    if n < (1 << i):
        print(1<<(i-1))
        break