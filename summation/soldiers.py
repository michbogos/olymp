n = int(input())
sol = {1:1, 2:2}

for i in range(3, n+1):
    sol[i] = sol[i-1] + sol[i-2] + 1

print(sol[n])