text = input()

word = input()

sol = []
for i in range(len(text)-len(word)+1):
    if text[i:i+len(word)] == word:
        sol.append(str(i))

print(" ".join(sol))

