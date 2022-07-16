import datetime

n = int(input())

arr = []

for i in range(n):
    h, m, s = [int(i) for i in input().split()]
    arr.append(datetime.datetime(2000, 12, 1, h, m, s))

arr.sort()

for i in arr:
    print(" ".join([str(i) for i in [i.hour, i.minute, i.second]]))