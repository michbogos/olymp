abc = "abcdefghijklmnopqrstuvwxyz"

for _ in range(int(input())):
    input()
    print(max([abc.index(c)+1 for c in input()]))