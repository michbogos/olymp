import bisect

h = []

with open("input.txt") as f:
    for line in f:
        n = int(line)
        h.insert(bisect.bisect(h, n), n)
        if len(h) % 2 == 0:
            print((h[len(h)//2] + h[len(h)//2 - 1])//2)
        else:
            print(h[len(h)//2])
