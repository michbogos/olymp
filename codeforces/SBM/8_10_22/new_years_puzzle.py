blocks = []

with open("input.txt", "r") as f:
    n = int(f.readline())
    for x in f:
        if(x == "\n"):
            blocks = []
        else:
            blocks.append([int(i) for i in x.split()])