res = []
ress = []
crt = [["." for i in range(40)] for u in range(6)]
with open("10.txt", "r") as f:
    clk = 0
    crtx = 0
    crty = 0
    x = 1
    for line in f:
        if line == "noop\n":
            if crtx == x-1:
                crt[crty][crtx] = "#"
            elif crtx == x:
                crt[crty][crtx] = "#"
            elif crtx == x+1:
                crt[crty][crtx] = "#"
            
            crtx += 1

            if crtx%40 == 0:
                crty += 1
                crtx = 0
            res.append(x)
        else:
            a, n = line.split()
            if crtx == x-1:
                crt[crty][crtx] = "#"
            elif crtx == x:
                crt[crty][crtx] = "#"
            elif crtx == x+1:
                crt[crty][crtx] = "#"
            
            crtx += 1
            if crtx%40 == 0:
                crty += 1
                crtx = 0

            res.append(x)
            #res.append(x)

            if crtx == x-1:
                crt[crty][crtx] = "#"
            elif crtx == x:
                crt[crty][crtx] = "#"
            elif crtx == x+1:
                crt[crty][crtx] = "#"

            crtx += 1

            if crtx%40 == 0:
                crty += 1
                crtx = 0
            x += int(n)
            res.append(x)
    
    print(res[19], res[59], res[99], res[219])
    
    for i in range(len(res)-1):
        if i+1==20 or (i+1)%40 == 20:
            ress.append((i+1)*res[i-1])
    print(len(res))
    print(ress)
    print(sum(ress))
    for row in crt:
        print("".join(row))
        