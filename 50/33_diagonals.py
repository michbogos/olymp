n = int(input())

letters = "abcdefghijklmnopqrstuvwxyz"

sol = [[" " for i in range(n)] for u in range(n)]
visited = [[False for i in range(n)] for u in range(n)]

def dfs(current):
    try:
        if sol[current[1]+1] == " ":
            sol[current[1]+1] == letters[letters.find(current[1])+1]
        else: return
    except:
        return
    dfs([current[0], current[1]+1])

for i in range(n):
    sol[i][i] = "a"
    sol[i][-i-1] = "a"

dfs([0, 0])

for row in sol:
    print("".join(row))