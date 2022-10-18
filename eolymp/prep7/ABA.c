s = input()

count_a = 0
count = 1

for i in range(len(s)-1):
    if s[i] == "A":
        count_a += 1
    elif s[i] == "B" and s[i+1] == "A":
        count += count_a
        count_a += 1
    else:
        pass

print(s.strip("CDEFGHIJKLMNOPQRSTUVWXYZ"))

print(count)