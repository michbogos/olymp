with open("04.txt", "r") as f:
    count = 0
    for line in f:
        a, b = line.split(",")
        x1, y1 = [int(i) for i in a.split("-")]
        x2, y2 = [int(i) for i in b.split("-")]
        if x2 >= x1 and x2 <= y1 or y1 >= y2 and y2 >= x1:
            count += 1
        elif x1 >= x2 and x1 <= y2 or y2 >= y1 and y1 >= x2:
            count += 1
    print(count)