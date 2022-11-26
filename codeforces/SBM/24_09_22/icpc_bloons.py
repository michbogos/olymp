for _ in range(int(input())):
    n = int(input())
    print(n + len(set([s for s in input()])))