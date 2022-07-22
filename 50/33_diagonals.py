n = int(input())

letters = "abcdefghijklmnopqrstuvwxyz"

used_letters = letters[0:n-1]*10
print(used_letters)

sol = [[" " for i in range(n)] for u in range(n)]

for i in range(n//4):
    print(letters[i:n//4])