n = int(input())

points = []

for i in range(n):
    points.append([int(i) for i in input().split()])

count = [0, 0, 0, 0, 0]

for i in points:
    if i[0] == 0 or i[1] == 0:
        count[4] += 1
    elif i[0] > 0 and i[1] > 0:
        count[0] += 1
    elif i[0] < 0 and i[1] > 0:
        count[1] += 1
    elif i[0] < 0 and i[1] < 0:
        count[2] += 1
    elif i[0] > 0 and i[1] < 0:
        count[3] += 1

for i in count:
    print(i)
        
