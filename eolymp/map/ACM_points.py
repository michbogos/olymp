from collections import defaultdict

line = input()
res = 0
count = 0
d = defaultdict(int)

while(line != "-1"):
    a, b, c = line.split(" ")
    if c == "right":
        res += int(a)
        res += d[b]
        count += 1
    else:
        d[b] += 20
    line = input()

print(count, res)