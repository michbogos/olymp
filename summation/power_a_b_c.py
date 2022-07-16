for i in range(int(input())):
    a, b, c = [int(i) for i in input().split()]
    tmp = int((a**b)%(1e7 + 9))
    print(int((tmp**c)%(1e7 + 9)))