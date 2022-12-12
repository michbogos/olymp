with open("08.txt", "r") as f:
    m = []
    mx = 0
    for line in f:
        m.append([int(i) for i in line.replace("\n", "")])
    count = 2*len(m) + 2*(len(m)-2)
    for i in range(1, len(m)-1):
        for j in range(1, len(m)-1):
            f1 = False
            f2 = False
            f3 = False
            f4 = False
            c1 = 0
            c2 = 0
            c3 = 0
            c4 = 0
            for k in range(i+1, len(m[i])):
                c1 += 1
                if(m[k][j] >= m[i][j]):
                    f1 = True
                    break
            for k in range(j+1, len(m)):
                c2 += 1
                if(m[i][k] >= m[i][j]):
                    f2 = True
                    break
            for k in reversed(range(i)):
                c3 += 1
                if(m[k][j] >= m[i][j]):
                    f3 = True
                    break
            for k in reversed(range(j)):
                c4 += 1
                if(m[i][k] >= m[i][j]):
                    f4=True
                    break
                    
            mx = max(mx, c1*c2*c3*c4)
            if not f1 or not f2 or not f3 or not f4:
                print(f"{i}-{j}:{m[i][j]}")
                count += 1
    print(count)
    print(mx)