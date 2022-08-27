tasks = []
input()
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

for i in range(len(a)):
    tasks.append([a[i], b[i]])

tasks.sort(key=lambda x: x[0] + x[1], reverse=True)

sa = 0
sb = 0
s = 0
for i in tasks:
    s += max(*i)

print(s)