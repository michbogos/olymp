for _ in range(int(input())):
    m, target = [int(i) for i in input().split()]
    arr = sorted([int(i) for i in input().split()])
    i = 0
    run = True
    ss = sum(arr)
    s = 0
    s = ((arr[-1]+arr[0])*(arr[-1]-arr[0]+1))//2
    lost = s-ss
    if int(lost) > target:
        print("NO")
    elif int(lost) == target:
        print("YES")
    else:
        element = arr[-1]
        while lost < target:
            lost += element + 1
            element += 1
        if lost == target:
                print("YES")
        if lost > target:
                print("NO")