from bisect import bisect_left
for _ in range(int(input())):
    n, q = [int(i) for i in input().split()]
    arr = [int(i) for i in input().split()]
    prefix = []
    prefix.append(0)
    for i in arr:
        prefix.append(prefix[-1] + i)
    for i in range(q):
        print(f'answer:{bisect_left(prefix, int(input()))}')

