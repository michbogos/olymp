x1, y1 = [int(i) for i in input().split()]
x2, y2 = [int(i) for i in input().split()]
x3, y3 = [int(i) for i in input().split()]
x4, y4 = [int(i) for i in input().split()]

def f(x1, y1, x2, y2, x3, y3):
    return (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)


if (x1-x4)*(x2-x3) <= 0 and (y1-y4)*(y3-y2) <= 0:
    if f(x1, y1, x2, y2, x3, y3)*f(x1, y1, x2, y2, x4, y4)<= 0:
        if f(x3, y3, x4, y4, x1, y1) * f(x3, y3, x4, y4, x2, y2) <= 0:
            print("Yes")
            exit(0)

print("No")

