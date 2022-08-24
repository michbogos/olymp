n, m, x = [int(i) for i in input().split()]

arr1 = [int(j) for j in input().split()]
arr2 = [int(k) for k in input().split()]

arr1.sort()
arr2.sort()

i = 0
j = len(arr2)-1

m = abs(arr1[i] + arr2[j] - x)

while i <= len(arr1)-1 and j >= 0:
    if abs(arr1[i] + arr2[j] - x) < m:
        m = abs(arr1[i] + arr2[j] - x)
    if arr1[i] + arr2[j] > x:
        j -= 1
    else:
        i += 1

print(m)