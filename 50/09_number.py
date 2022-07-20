num = input()

if num[0] == num[1] == num[2] == num[3] == num[4] == num[5]:print(num[0])
elif num[0:1] == num[2:3] == num[4:5]: print(num[0:2])
elif num[0:2] == num[3:5]: print(num[0:3])
else:print(num)