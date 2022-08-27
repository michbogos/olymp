for j in range(int(input())):
    num = [ i for i in "{0:b}".format(int(input()))]

    print(num)

    rev_num = num[::-1]

    flag = False

    for i, b in enumerate(rev_num):
        if b == "1" and rev_num[i+1] == "0":
            rev_num[i+1] = "1"
            rev_num[i] = "0"
            flag = True
            break
    if not flag:
        num = []
        num_one = rev_num.count("1")
        num_zero = rev_num.count("0")
        num.append("1")
        num.extend(["0" for i in range(num)])

    #try:
    #    if rev_num[rev_num.index("1")+1] == "0":
    #        i = rev_num.index("1")+1
    #        rev_num[i] = "1"
    #        rev_num[i-1] = "0"
    #except:



    try:
        num[num.index("0")] = "1"
    except:
        l = len(num)
        num = ["1"]
        num.extend(["0" for i in range(l)])
        num = num[::-1]

    s = 0
    for i, b in enumerate(num):
        if b == "1":
            s += 2**i

    print(num, s)