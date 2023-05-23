with open("liars.dat", "r") as f: 
    f.readline()
    arr = [int(i) for i in f.readline().split()]
    count = [0 for i in range(10000)]

    for i in arr:
        count[i] += 1

    res = 0
    for i in range(len(count)):
        if i == count[i] and i != 0:
            res += 1

    with open("liars.sol", "w") as ff:
        if res == 1:
            ff.write("0")
        else:
            ff.write(str(res))