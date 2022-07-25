n, m  = [int(i) for i in input().split()]
a = [[0 for i in range(n)] for u in range(n)]
for i in range(m):
    i, j = [int(i) for i in input().split()]
    a[i][j] = 1

count = 0

for i in range(n):
    for u in range(i+1, n):
        if a[i][j] == 1:
            for k in range(j+1, n):
                if a[i][k] + a[j][k] < 2:
                    count += 1

print(count//2)