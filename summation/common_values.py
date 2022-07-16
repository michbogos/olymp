n, q = [int(i) for i in input().split()]

d = {}

for i in input().split():
    try:
        d[i] += 1
    except:
        d[i] = 1
a = []

for i in range(q):
    q1, q2 = [i for i in input().split()]
    try:
        num1 = d[q1]
    except:
        num1 = 0
    try:
        num2 = d[q2]
    except:
        num2 = 0
    a.append(max(num1, num2))

input()

for i in a:
    print(i)