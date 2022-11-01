for t in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    i0 = arr.index(1);
    i1 = arr[::-1].index(1)

    arr = arr[i0:(len(arr)-i1)]
    print(arr.count(0))