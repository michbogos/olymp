for _ in range(int(input())):
    n,m = [int(i) for i in input().split()]
    matrix = [[] for _ in range(n)]
    for i in range(n):
        matrix[i] = [int(i) for i in input().split()]

    ly = []
    tx = []
    bx = []
    ry = []
                
    
    print(matrix)