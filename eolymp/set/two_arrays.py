n = int(input())
arr1 = [int(i) for i in input().split()]
m = int(input())
arr2 = [int(i) for i in input().split()]
res = []
for i in arr1:
    if i not in arr2:
        res.append(i)
print(len(res))
print(" ".join([str(i) for i in res]))