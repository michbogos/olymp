import math
def is_power4(n):
    if math.log(n, 4).is_integer():
        return True
    else:
        return False

n = len(input())
if is_power4:
    print("NO")
    exit()
print("YES")

