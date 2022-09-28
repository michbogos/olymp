filter =[[1, -1, 1],
        [-1, 1, -1],
        [1, -1, 1]]

def matmul(mat1, mat2, x, y):
    res = 0
    for i in range(len(mat2)):
        for j in range(len(mat2)):
            res += mat1[i+x][y+j] * mat2[i][j]
    return res

for i in range(int(input())):
    input()
    mat = [["" for h in range(8)] for g in range(8)]
    for j in range(8):
        row = input()
        for k in range(8):
            if row[k] == ".":
                mat[j][k] = -1
            else:
                mat[j][k] = 1
    for l in range(6):
        for m in range(6):
            if matmul(mat, filter, l, m) == 9:
                print(l + 2, m + 2)
                break