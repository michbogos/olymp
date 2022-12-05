for _ in range(int(input())):
    arr = sorted([int(i) for i in input().split()])
    if arr[1] != arr[2]:print("NO")
    else: print("YES\n", arr[0], arr[0], arr[2])