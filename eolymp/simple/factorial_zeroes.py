n = int(input())

count = 0
i = 1
while 5**i < n:
    count += n//(5**i)
    i += 1

print(count)