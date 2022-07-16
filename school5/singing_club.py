import math

sols = []
with open("input.txt", "r") as f:
    for line in f:
        a, b = [int(i) for i in line.split()]
        if math.gcd(a, b) == 1:
            sols.append("YES\n")
        else:
            sols.append("NO\n")
    out = open("output.txt", "w")
    out.writelines(sols)
    out.close()