for t in range(int(input())):
    input()
    arr = [int(j) for j in input().split()]
    i = 0
    sol = []
    while(len(arr) > 0):
        if i % 2 == 0:
            sol.append(str(arr[0]))
            del arr[0]
        else:
            sol.append(str(arr[-1]))
            del arr[-1]
        i += 1
    
    print(" ".join(sol))