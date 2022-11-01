for _ in range(int(input())):
    input()
    arr = [int(i) for i in input().split()]
    mx = max(arr)
    indices = [i for i, x in enumerate(arr) if x == mx]
    curr = indices[0]
    for i in indices[1:]:
        if i - curr > 1:
            print(curr)
            break
        curr = i
