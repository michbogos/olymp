x1, y1, x2, y2 = [int(i) for i in input().split()]

if x1 > y1:
    y1, x1 = x1, y1

if x2 > y2:
    y2, x2 = x2, y2

if (x1 > x2 and y1 < y2) or (x1 < x2 and y1 < y2) or (x1 > x2 and y1 > y2):
    print(1)
else:
    print(0)