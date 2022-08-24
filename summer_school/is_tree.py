n = int(input())

count = 0

for i in range(n):
    count += sum([int(u) for u in input().split()])

if  n-1 == count//2:
    print("YES")
else:
    print("NO")