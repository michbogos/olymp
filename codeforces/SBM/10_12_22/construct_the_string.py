abc = "abcdefghijklnmopqrstuvwxyz"
for _ in range(int(input())):
    n, a, b = [int(i) for i in input().split()]

    s = ""
    for i in range(b):
        s += abc[i]
    for i in range(a-b):
        s += "a"
    
    s *= 2000
    print(s[:n])