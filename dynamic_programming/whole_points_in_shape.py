import math

n = int(input())

coords = [int(i) for i in input().split()]

x_coords = [coords[i] for i in range(0, len(coords), 2)]
y_coords = [coords[i] for i in range(1, len(coords), 2)]


def findWholeOnLine(x1, y1, x2, y2):
    return math.gcd(abs(x2-x1), abs(y2-y1)+1)

def polygonArea(X, Y):
  
    area = 0.0
    
    j = n - 1
    for i in range(0,len(X)):
        area += (X[j] + X[i]) * (Y[j] - Y[i])
        j = i
      
    return int(abs(area / 2.0))

def findWholePointsInShape(area, boundary):
    return area - boundary/2 + 1
    
boundary_points = 0

for i in range(len(x_coords)-1):
    boundary_points += findWholeOnLine(x_coords[i], y_coords[i], x_coords[i+1], y_coords[i+1])


print(findWholePointsInShape(polygonArea(x_coords, y_coords), boundary_points))
