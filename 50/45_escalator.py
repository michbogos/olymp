n = input()
n = n[::-1]
count = 0

for i, c in enumerate(n):
    count += (int(c + "0"*i)/10)*i+1
    print(i, c, count)


if int(n[::-1]) % 10 != 0:
    count += len(n)

print(int(count+1))
