l = {}

for i in range(int(input())):
    flag = True
    for u in range(int(input())):
        a, b = [int(i) for i in input().split()]
        l[a] = b
    for i in l:
        try:
            if i == l[l[i]]:
                pass
        except:
            flag = False
            print("NO")
            break
    if flag:
        print("YES")