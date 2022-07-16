n = int(input())

counter = 0

while n != 1:
    if n % 3 != 0:
        n //= 2
        counter += 1
    else:
        n //= 3
        counter += 1

print(counter)
