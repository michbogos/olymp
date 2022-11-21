for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    sol = []
    flag = False
    if len(arr) == 1:
        print("YES")
    else:
        for i in range(len(arr)-1):
            if i == 0:
                if arr[i] == arr[i+1]:
                    sol.append(True)
            elif i+1 == n-1:
                if arr[i] == arr[i+1]:
                    sol.append(True)
            elif arr[i] == arr[i+1] and arr[i-1] < arr[i] and arr[i+2] > arr[i+1]:
                sol.append(True)
            else:
                sol.append(False)
    print(sol)
        