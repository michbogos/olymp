input()
arr1 = [int(i) for i in input().split()]

input()

arr2 = [int(i) for i in input().split()]

s = []
count = 0

for i in arr1:
    if i not in arr2:
        count += 1
        s.append(str(i))

print(count)
print(" ".join(s))