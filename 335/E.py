n = int(input())

counter = 2

if n == 1:
    print(1)
else:
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            counter += 1

    print(counter)
    
