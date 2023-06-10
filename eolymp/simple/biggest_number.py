s = input()

mn = 10000000000000

for i in range(len(s)):
    ss = s.replace(s[i], "", 1)
    if ss[0] != "0":
        mn = min(int(ss), mn)

print(mn)
