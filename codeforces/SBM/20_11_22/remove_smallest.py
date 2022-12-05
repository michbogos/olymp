for _ in range(int(input())):
    n = int(input())
    arr = sorted([int(i) for i in input().split()])
    flag = True
    for i in range(len(arr)-1):
        if arr[i+1]-arr[i] > 1:
            print("NO")
            flag = False
            break
    
    if flag:
        print("YES")