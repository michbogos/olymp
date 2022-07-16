# input()

# coords = [int(i) for i in input().split()]

# #connections = [0] * len(coords)

# coords = sorted(coords)

# coords.insert(0, 100000000)
# coords.append(100000000)

# s = 0

# i = 1

# while i < len(coords)-1:
#     s += min(abs(coords[i]-coords[i-1]), abs(coords[i+1]-coords[i]))
#     if min(abs(coords[i]-coords[i-1]), abs(coords[i+1]-coords[i])) == abs(coords[i+1]-coords[i]):
#         i += 1
#     i += 1
        

# print(s)

input()

coords = [int(i) for i in input().split()]

coords = sorted(coords)

s = 0
s += coords[1] - coords[0]

i = 2
while i < len(coords)-1:
    s += min(coords[i] - coords[i-1], coords[i+1] - coords[i])
    if i == len(coords) - 2 and min(coords[i] - coords[i-1], coords[i+1] - coords[i]) == coords[i] - coords[i-1]:
        s += coords[i+1] - coords[i]
        s -= coords[i] - coords[i-1]
        i += 1000000
        break
    i += 1

print(s)