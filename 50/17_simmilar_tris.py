tris = [int(i) for i in input().split()]

if tris[0]/tris[3] == tris[1]/tris[4] == tris[2]/tris[5]:
    print(1)
else:
    print(0)