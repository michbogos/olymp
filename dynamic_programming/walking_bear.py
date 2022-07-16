m, k = [int(i) for i in input().split()]

sol = []

counter = 0

while len(sol)< k-2:
    if k % 2 != 0:
        if counter % m == 0:
            if (counter // m) % 2 != 0:
                sol.append(str(counter))
    elif k % 2 == 0:
        if counter % m == 0:
            if (counter//m)%2 == 0:
                sol.append(str(counter))
    counter += 1

print(" ".join(sol))
        
