a, b, c = [int(i) for i in input().split(" ")]

if a+b > c and a+c > b and c+b > a:
    print("Yes")
else:
    print("No")
