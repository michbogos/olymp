from collections import deque
n = int(input())

sols = deque([2, 4, 7], maxlen=4)

if n < 4:
    print(sols[n-1])
else:
    for i in range(n-3):
        sols.append(sols[-1]+ sols[-2]+ sols[-3])

    print(sols[-1]%12345)