for j in range(int(input())):
    num = [u for u in "{0:b}".format(int(input()))[::-1]]

    i = 0
    s = []
    while len(num) > 0:
        if num[0] == "1":
            s.append(str(i))
        del num[0]
        i += 1

    print(" ".join(s))