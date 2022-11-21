for _ in range(int(input())):
    s = input()
    base = "Yes"*100
    try:
        base.index(s)
        print("YES")
    except:
        print("NO")