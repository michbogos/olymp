d1 = {}
d2 = {}

n = int(input())

for i in range(n):
    s = input()
    try:
        d1[s] += 1
    except:
        d1[s] = 1

for i in range(n):
    s = input()
    try:
        d2[s] += 1
    except:
        d2[s] = 1

arr1 = [d1[i] for i in d1]
arr2 = [d2[i] for i in d2]

for i, j in zip(arr1, arr2):
    