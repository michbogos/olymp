board = []

for i in range(3):
    board.append(input())

def equal(arr): return arr[0] == arr[1] == arr[2]

sol = (
    equal(board[0]) * board[0][0] +
    equal(board[1]) * board[1][0] +
    equal(board[2]) * board[2][0] +
    equal([row[0] for row in board]) * board[0][0] +
    equal([row[1] for row in board]) * board[0][1] +
    equal([row[2] for row in board]) * board[0][2] +
    equal([board[0][0], board[1][1], board[2][2]]) * board[0][0] +
    equal([board[2][0], board[1][1], board[0][2]]) * board[2][0]
    )
if len(sol) > 1:
    print("x"*("x" in sol) + "o"*("o" in sol))
    exit()
if sol != "":
    print(sol)
    exit()
else:
    for row in board:
        if "." in row:
            print(".")
            exit()
print("=")