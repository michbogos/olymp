cities = {}
from bisect import insort_right

n, m = input().split()

for i in range(int(n)):
    s = [int(i) for i in input().split()]
    if len(s) > 1:
        try:
            insort_right(cities[int(s[1])], int(s[2]))
        except KeyError:
            cities[int(s[1])] = [int(s[2])]
    else:
        m = 0
        stone = []
        pebbles = []
        for key in cities:
            pebbles.append([min(cities[key]), key])
        for i in range(len(pebbles)):
            if pebbles[i][0] > m:
                m = pebbles[i][0]
                stone = pebbles[i]
        cities[stone[1]].remove(stone[0])
        print(stone[0])