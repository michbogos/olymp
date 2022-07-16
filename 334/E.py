n, a, b = [int(i) for i in input().split(" ")]

score = 0

score += (n - 1) * 3

a -= n - 1

if b == a:
    score += 1
elif a > b:
    score += 3

print(score)
