import math
print(" ".join(str(i[1]) for i in sorted([(math.sin(j), j) for j in range(int(input()))])))