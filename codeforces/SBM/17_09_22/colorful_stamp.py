for _ in range(int(input())):
    n = int(input())
    arr = input().split("W")
    f = True
    for segment in arr:
        if segment == "":continue
        flag = False
        for char in segment:
            if char != segment[0]:
                flag = True
        if flag == False:
            f = False
    if f:
        print("YES")
    else:
        print("NO")