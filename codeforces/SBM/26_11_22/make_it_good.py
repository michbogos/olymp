for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    arr = arr[::-1]

    count = 0

    for i in range(n-1):
        if arr[i] <= arr[i+1]:
            count += 1
        else:
            break
    
    for i in range(count, n-1):
        if arr[i] >= arr[i+1]:
            count += 1
        else:
            break
    
    print(f"answer: {n-count-1}")