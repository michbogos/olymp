n, m, k = [int(i) for i in input().split()]

arr = sorted([int(i) for i in input().split()])

c = 0
res = 0
while(res<=m*k):
    if(len(arr) == 0):
        print(-1)
        exit()
    res += arr[-1]
    c += 1
    del arr[-1]
print(c)