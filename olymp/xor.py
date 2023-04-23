try:
    with open("plusxor.dat", "r") as f:
        a = int(f.readline())
        b = int(f.readline())
        x = (a+b)//2
        y = (a-b)//2
        x, y = sorted([x, y])
        with open("plusxor.sol", "w") as ff:
            if a%2 != b%2:
                ff.write("-1")
                exit()
            ff.write(" ".join([str(x), str(y)]))
except FileNotFoundError:
    a = int(input())
    b = int(input())
    x = (a+b)//2
    y = (a-b)//2
    x, y = sorted([x, y])

    print(" ".join([str(x), str(y)]))