from functools import reduce

for i in range(int(input())):
    l, r = [int(i) for i in input().split()]
    print(reduce(lambda x, y: x^y, [int(i) for i in range(l, r+1)]))