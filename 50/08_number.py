num = input()

if num[0:3] == num[3:5]:
    print(num[0:2])
elif num[0:2] == num[2:3]:
    print(num[0:1])
elif num[0] == num[1]:
    print(num[0])
else:
    print(num)
