HEX = "0123456789ABCDEF"
hexnum = []
num, base = [int(i) for i in input("Enter number and base in form of <NUMBER> <BASE>: ").split()]
while num != 0:
    hexnum.append(HEX[num%base])
    print("Current: " + "".join(reversed(hexnum)),  "Rest: "+str(num%base), "Next: "+str(num//base))
    num //= base