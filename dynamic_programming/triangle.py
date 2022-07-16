import math
sides = [int(i) for i in input().split()]

sides.sort()

if sides[0] + sides[1] <= sides[2]:
    print("IMPOSSIBLE")
elif math.hypot(sides[0], sides[1]) == sides[2]:
    print("RIGHT")
elif math.hypot(sides[0], sides[1]) > sides[2]:
    print("ACUTE")
elif math.hypot(sides[0], sides[1]) < sides[2]:
    print("OBTUSE")
