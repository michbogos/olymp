n = int(input())

states = [1, 2, 4]

while states[-1] <= n:
    states.append(states[-1]*2)

if n in states:
    print(0)
elif states[-1] > n:
    print(n-states[-2])
