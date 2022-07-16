n, a, b, m = [int(i) for i in input().split(" ")]

if n != 0:
    print(m//((a * b)//n) + 1)
else:
    print(m//((a * b)//n))
