a, b = [int(i) for i in input().split()]

if a == b:
    if a!=12:
        print(26)
    else:
        print(24)
else:
    if a == 12 or b == 12:
        print(48)
    else:
        print(52)