girls = []
boys = []
for i in range(int(input())):
    g, h = [int(u) for u in input().split()]
    if g:
        girls.append(h)
    else:
        boys.append(h)
girls.sort(reverse=True)
boys.sort(reverse=True)
boys.extend(girls)
m = 0
for i in range(len(boys)-1):
    m = max(abs(boys[i] - boys[i+1]), m)
print(m)