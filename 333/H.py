import math
coords = [int(i) for i in input().split(" ")]
print(math.hypot(abs(coords[2]-coords[0]), abs(coords[3]-coords[1])))
