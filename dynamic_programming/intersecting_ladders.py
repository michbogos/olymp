import math

x, y, c = [float(i) for i in input().split()]

def step(width):
    a = math.sqrt(abs(x**2 - width**2))
    b = math.sqrt(abs(y**2 - width**2))
    return c-a*b/(a + b)

def ternarySearch(l, r, key):
    for i in range(100):
         
        mid1 = l + (r-l) / 3
        mid2 = r - (r-l) / 3
 
        if key == step(mid1):
            return mid1
        if key == step(mid2):
            return mid2
 
        if key < step(mid1):
            r = mid1
        elif key > step(mid2):
            l = mid2
        else:
            l = mid1
            r = mid2
    return (mid1 + mid2)/2

print(format(ternarySearch(0, max(x, y), 0), ".3f"))
