import math
input()

def binarySearch(array, x, low, high):

    # Repeat until the pointers low and high meet each other
    while low <= high:

        mid = low + (high - low)//2

        if array[mid] == x:
            return "YES"

        elif array[mid] < x:
            low = mid + 1

        else:
            high = mid - 1

    return "NO"

butterflies = [int(i) for i in input().split()]

input()

for butterfly in [int(u) for u in input().split()]:
    print(binarySearch(butterflies, butterfly, 0, len(butterflies)-1))
