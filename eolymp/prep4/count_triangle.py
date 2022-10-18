n = int(input())

d = {}

for i in range(n):
    num = int(input())
    key = num
    try:
        print(d[num])
    except: 
        if num < 3: c = 0
        else: c = 1
        s = num**2
        sol = s
        while(num > 1):
            sol += s//num**2
            num -= 1
        d[key] = sol+c
        print(sol + c)