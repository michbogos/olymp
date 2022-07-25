a, b = [int(i) for i in input().split()]

if a == b and a == 12:
    print(24)
elif a != b and a != 12 and b != 12:
    print(52)
elif (a == 12 or b == 12) and (a + b != 24):
    print(50)
elif a == b and a+b != 24:
    print(26)