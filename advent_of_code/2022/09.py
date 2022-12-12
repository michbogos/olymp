import math

s = set([])
ss = set([])
hpos = [0, 0]
tpos = [0, 0]

def update(parent):
    tpos[0] += sign(hpos[0]-tpos[0])
    tpos[1] += sign(hpos[1]-tpos[1])

def sign(x):
    if x == 0:
        return 0
    return x//abs(x)

with open("/home/user/Desktop/olymp/advent_of_code/2022/09.txt", "r") as f:
    for line in f:
        c, n = line.split()
        n = int(n)
        if c == "U":
            for i in range(n):
                hpos[1] += 1
                if abs(hpos[0]-tpos[0]) > 1 : update()
                if abs(hpos[1]-tpos[1]) > 1 : update()
                s.add(tuple(tpos))
                ss.add(tuple(hpos))
        if c == "D":
            for i in range(n):
                hpos[1] -= 1
                if abs(hpos[0]-tpos[0]) > 1 : update()
                if abs(hpos[1]-tpos[1]) > 1 : update()
                s.add(tuple(tpos))
                ss.add(tuple(hpos))
        if c == "L":
            for i in range(n):
                hpos[0] -= 1
                if abs(hpos[0]-tpos[0]) > 1 : update()
                if abs(hpos[1]-tpos[1]) > 1 : update()
                s.add(tuple(tpos))
                ss.add(tuple(hpos))
        if c == "R":
            for i in range(n):
                hpos[0] += 1
                if abs(hpos[0]-tpos[0]) > 1 : update()
                if abs(hpos[1]-tpos[1]) > 1 : update()
                s.add(tuple(tpos))
                ss.add(tuple(hpos))
    
    print(len(s))

        # if hpos[0]-tpos[0] > 1:
        #     tpos[0] += 1
        # elif (hpos[1]-tpos[1]) > 1:
        #     tpos[1] += 1
        # elif hpos[0]-tpos[0] < -1:
        #     tpos[0] -= 1
        # elif (hpos[1]-tpos[1]) < -1:
        #     tpos[1] -= 1
        # elif (hpos[1]-tpos[1]) > 1 and (hpos[0]-tpos[0]) < -1:
        #     tpos[1] -= 1
        #     tpos[0] -= 1
        # elif abs((hpos[1]-tpos[1])) < 1 and (hpos[0]-tpos[0]) > 1:
        #     tpos[1] += 1
        #     tpos[0] += 1