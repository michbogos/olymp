n = int(input())
i = 1
s = 100

while i != n:
    s *= 2
    if str(s).count("0") > len(str(s))//2:
        print(10 - int(str(s)[str(s).index("0")-1]))# * (10 * len(str(s)) - str(s).index("0"))
    i += 1

print(s)