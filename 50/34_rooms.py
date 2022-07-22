a, b, c, d = [int(i) for i in input().split()]

if a*b > c*d:
    print("M")
elif c*d > a*b:
    print("P")
else:
    print("E")