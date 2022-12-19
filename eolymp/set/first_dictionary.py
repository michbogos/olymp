with open("input.txt", "r") as f:
    s = set([])
    for line in f:
        for word in line.split():
            s.add("".join([e.lower() for e in word if e.isalpha()]))
    res = sorted(list(s))
    print("\n".join(res))
    with open("output.txt", "w") as ff:
        ff.write("\n".join(res))