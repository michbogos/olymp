n = int(input())

coords_x = []
coords_y = []

for i in range(n):
    x, y = [int(i) for i in input().split()]
    coords_x.append(x)
    coords_y.append(y)

def polygonArea(X, Y, n):
  
    area = 0.0
    
    j = n - 1
    for i in range(0,n):
        area += (X[j] + X[i]) * (Y[j] - Y[i])
        j = i
      
    return int(abs(area / 2.0))

print(format(polygonArea(coords_x, coords_y, n), ".3f"))
