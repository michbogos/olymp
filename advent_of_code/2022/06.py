with open("06.txt", "r") as f:
    line = f.readline()
    for i in range(len(line)-14):
        if len(set([c for c in line[i:i+14]])) == 14:
            print(i+14)
            break
