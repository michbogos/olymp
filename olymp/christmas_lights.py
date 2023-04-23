with open("garland.dat", "r") as f:
    n = int(f.readline())
    with open("garland.sol", "w") as ff:
        res = ("{0:b}".format(n).count("1"))
        ff.write(str((1<<(res-1))))