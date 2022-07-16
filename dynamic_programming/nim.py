from functools import reduce
from operator import ixor


n = int(input())

while n != 0:
    nums = [int(i) for i in input().split()]

    xor = reduce(ixor, nums)
    print(xor)

    for i in nums:
        if (xor^i) < i:
            print(xor^i, i)
    n = int(input())