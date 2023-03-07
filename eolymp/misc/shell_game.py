n = int(input())

aa = []
bb = []
gg = []

for i in range(n):
    a, b, g = [int(i) for i in input().split()]
    aa.append(a)
    bb.append(b)
    gg.append(g)

def f(location):
    count = 0
    for i in range(n):
        if location == aa[i]:
            location = bb[i]
        elif location == bb[i]:
            location = aa[i]
        if(gg[i]==location):
            count+= 1
    return count

print(max(f(1), f(2), f(3)))
