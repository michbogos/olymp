for _ in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    m = min(arr)
    print(sum([i-m for i in arr]))