n = int(input())

for i in range(n):

    _ = input()

    nums = [int(i) for i in input().split()]

    d = {}

    for i in nums:
            try:
                d[i] += 1

            except:
                d[i] = 1

    vals = [d[i] for i in d]

    m = max(vals)
    mx = []

    for i in d:
        if d[i] == m:
            mx.append(i)

    if len(mx) == 1:
        print(mx[0])
    else:
        print(0)
