for _ in range(int(input())):
    n = int(input())
    arr = [int(i) for i in input().split()]
    for i in range(n):
        m, moves = [i for i in input().split()]
        arr[i] -= moves.count("U")%10
        arr[i] += moves.count("D")%10

        arr[i] %= 10
    print(" ".join([str(i) for i in arr]))