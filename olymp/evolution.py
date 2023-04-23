with open("evo.dat", "r") as f:
    n = int(f.readline())
    a = int(f.readline())
    b = int(f.readline())
    while a != b:
        if a > b:
            a//=2
        elif b > a:
            b//=2
    with open("evo.sol", "w") as ff:
        ff.write(str(a))