s = 0
mx = 0
l = []
with open("01.txt", "r") as f:
    for line in f:
        if line=="\n":
            l.append(s)
            s = 0
        else:
            s += int(line)

print(sum(sorted(l, reverse=True)[0:3]))