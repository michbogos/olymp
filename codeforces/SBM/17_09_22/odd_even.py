for _ in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    arr1 = arr[0::2]
    arr2 = arr[1::2]
    arr1 = [i%2 for i in arr1]
    arr2 = [i%2 for i in arr2]
    f = True
    for i in arr1:
        if i != arr1[0]:
            f = False
    for i in arr2:
        if i != arr2[0]:
            f = False
    if f:
        print("YES")
    else:
        print("NO")