num = input()

i = 0

while len(num):
    if num[len(num)-1] == "0":
        num = num[:len(num)-1]
    else:
        break

print(num.count("0"))