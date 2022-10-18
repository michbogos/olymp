n = int(input())

total = 0

e = 10

i = 0

if n != 0:
    while total < n:
        i += 1
        total += e
        e *= 1.1
    print(i)
    
else:
    print(0)
