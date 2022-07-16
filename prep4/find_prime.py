n = int(input())
i = 2
flag = True
while i*i < n:
    if n % i == 0:
        flag = False
        break
    i += 1
if not flag:
    print("No")
else:
    if n == 2:
        print("Yes")
    elif n == 1:
        print("No")
    else:
        print("Yes")

