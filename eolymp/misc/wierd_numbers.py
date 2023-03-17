n = int(input())

res = [1, 12,23,34,45,56,67,78,89,91]
num = 1

while(len(res) < n):
    if int(str(num+10)[0]) > int(str(num)[0]):
        num += 1
        res.append(num)
        num += 10
        continue
    else:
        num += 10
    res.append(num)

print(" ".join([str(i) for i in res[:n]]))