def line_intersect(Ax1, Ay1, Ax2, Ay2, Bx1, By1, Bx2, By2):
    d = (By2 - By1) * (Ax2 - Ax1) - (Bx2 - Bx1) * (Ay2 - Ay1)
    if d:
        uA = ((Bx2 - Bx1) * (Ay1 - By1) - (By2 - By1) * (Ax1 - Bx1)) / d
        uB = ((Ax2 - Ax1) * (Ay1 - By1) - (Ay2 - Ay1) * (Ax1 - Bx1)) / d
    else:
        return "No"
    if not(0 <= uA <= 1 and 0 <= uB <= 1):
        return "No"
    x = Ax1 + uA * (Ax2 - Ax1)
    y = Ay1 + uA * (Ay2 - Ay1)
    
    return "Yes"

if __name__ == '__main__':
    (a, b), (c, d) = (int(i) for i in input().split()), (int(i) for i in input().split())
    (e, f), (g, h) = (int(i) for i in input().split()), (int(i) for i in input().split())
    print(line_intersect(a, b, c, d, e, f, g, h))