s = [[] for i in range(9)]
s[0].extend(["J", "Z", "G", "V", "T", "D", "B", "N"])
s[0] = s[0][::-1]
#s[0] = ["Z", "N"]
s[1].extend(["S", "R", "M", "D", "W", "P", "F"])
#s[1] = ["M" ,"C" ,"D"]
s[2].extend(["V", "C", "R", "S", "Z"])
#s[2] = ["P"]
s[3].extend(["R", "T", "J", "Z", "P", "H", "G"])
s[4].extend(["T", "C", "J", "N", "D", "Z", "Q", "F"])
s[5].extend(["N", "V", "P", "W", "G", "S", "F", "M"])
s[6].extend(["G", "C", "V", "B", "P", "Q"])
s[7].extend(["Z", "B", "P","N"])
s[8].extend(["W", "P", "J"])

with open("05.txt", "r") as f:
    for line in f:
        n, fro, to = [int(i) for i in line.replace("from", "").replace("to", "").replace("move", "").split()]
        s[to-1].extend(s[fro-1][-n:])
        s[fro-1] = s[fro-1][:len(s[fro-1])-n]
    print("".join([s[i][-1] for i in range(9)]))