for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    mx = 0
    idx = -1
    mxx = 0
    for i in range(len(arr)):
        if arr[i] > mx:
            mx = arr[i]
            idx = i
    for i in range(len(arr)):
        if i == idx:
            continue
        elif mxx < arr[i]:
            mxx = arr[i]
    for participant in arr:
        if participant == mx:
            print(participant - mxx, end=" ")
        else:
            print(participant-mx, end=" ")
    print("")