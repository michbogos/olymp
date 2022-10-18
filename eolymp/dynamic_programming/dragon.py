n, m = [int(i) for i in input().split()]

count = 0

if (m == 0) and (n % 2 != 0):
    print(-1)

else:

    if m % 2 != 0:
        count += 1
        m += 1

    if m % 2 == 0:
        if (m//2 + n) != 0:
            count += 2
            m += 2

    count += m//2 + (n + m//2)//2

    print(count)
