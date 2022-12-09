with open("03.txt", "r") as f:
    res = 0
    abc = "abcdefghijklmnopqrstuvwxyz"
    abc += abc.upper()

    for i in range(100):
        a = f.readline()
        b = f.readline()
        c = f.readline()
        print(a, b, c)
        if not a:
            exit(0)

        for char in abc:
            if char in a and char in b and char in c:
                res += abc.index(char)+1
    print(res)
