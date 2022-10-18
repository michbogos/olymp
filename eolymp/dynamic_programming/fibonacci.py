n = int(input())

sol = [1, 1]

if n < 2:
    print(1)

else:
    for i in range(n-1):
        sol.append(sol[-1] + sol[-2])

    print(sol[-1])
