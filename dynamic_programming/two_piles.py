n = int(input())

s = ""

for i in range(n):
    j, k = [int(u) for u in input().split()]
    if j == k:
        s += "2"
    else:
        s += "1"

print(s)
