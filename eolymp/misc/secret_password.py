a, b = [input(), input()]

for i in range(max(len(a), len(b))):
    try:
        print(a[i], sep="", end="")
    except:
        pass
    try:
        print(b[i], sep="", end="")
    except:
        pass