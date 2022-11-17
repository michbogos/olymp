for _ in range(int(input())):
    arr = input()
    s1 = sum([int(c) for c in arr[0:3]])
    s2 = sum([int(c) for c in arr[4:6]])
    if sum([int(c) for c in arr[0:3]]) == sum([int(c) for c in arr[3:6]]):
        print("YES")
    else:
        print("NO")