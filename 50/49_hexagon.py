import math
l = int(input())

side = 2 * l / (3 ** 0.25)
area = ((3 * (3**0.5)) / 2) * (side * side)

print(int(round(area, 0)))