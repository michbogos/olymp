import math
c = float(input())

x0 = c

while(float(format(x0**2+math.sqrt(x0), ".6f"))!= float(format(c, ".6f"))):
    x = x0 - ((x0**2+math.sqrt(x0)-c)/(2*x0+(1/2*math.sqrt(x0))))
    x0 = x

print(x)
