s, n = [int(i) for i in input().split()]

arr = sorted([int(i) for i in input().split()])

kol = [0 for i in range(210000)]

for element in arr:
    kol[element] += 1

ans = 0

for element in arr:
    ans += kol[s-element]
    if element == s-element:
        ans -= 1

print(ans//2)