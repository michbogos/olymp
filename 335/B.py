for i in range(int(input())):
    j, k = [int(i) for i in input().split(" ")]
    s = 0
    for i in range(j, k+1):
        s += i

    print(s)
