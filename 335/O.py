s = 1
for i in str(abs(int(input()))):
    if int(i) % 2 == 0 and int(i) != 0:
        s *= int(i)

if s == 1:
    s = 0

print(s)
