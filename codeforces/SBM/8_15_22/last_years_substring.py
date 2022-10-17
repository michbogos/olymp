import re

patterns  = ["^(20)[0-9]*(20)$", ".*(2020)$", "^(2020)*$", "^(2)[0-9]*(020)$", "^(202)[0-9]*(0)$"]

for t in range(int(input())):

    input()
    string = input()
    f = False
    for i in patterns:
        if re.findall(i, string) != []:
            print("YES")
            f = True
            break
    
    if not f:
        print("NO")   