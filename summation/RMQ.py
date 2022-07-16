import math
from os import TMP_MAX

MAX = 700

lookup = [[0 for i in range(100001)]
                 for j in range(20)]

def buildSparseTable(arr, n):
 
    for i in range(0, n):
        lookup[i][0] = arr[i]
     
    j = 1
     
    while (1 << j) <= n:
 
        i = 0
        while (i + (1 << j) - 1) < n:

            if (lookup[i][j - 1] >
                lookup[i + (1 << (j - 1))][j - 1]):
                lookup[i][j] = lookup[i][j - 1]
            else:
                lookup[i][j] = \
                        lookup[i + (1 << (j - 1))][j - 1]
             
            i += 1
        j += 1       
 
def query(L, R):

    j = int(math.log2(R - L + 1))

    if lookup[L][j] >= lookup[R - (1 << j) + 1][j]:
        return lookup[L][j]
 
    else:
        return lookup[R - (1 << j) + 1][j]
 

n = int(input())

nums = [int(i) for i in input().split()]

num_q = int(input())

queries = []

sparse_table = buildSparseTable(nums, len(nums))

for i in range(num_q):
    l, r = [int(i) for i in input().split()]
    if l > r:
        tmp = l
        l = r
        r = tmp
        print(query(l-1, r-1))
