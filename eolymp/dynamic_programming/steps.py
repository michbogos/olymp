n = int(input())

sol = [1, 2, 4]

if n < 4:
    print(sol[n-1])


else:
    for i in range(n-3):
        sol.append(sol[-3] + sol[-2] + sol[-1])

    print(sol[-1])