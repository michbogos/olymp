numstring = input("Enter number: ")
numstring = numstring[::-1]
base = int(input("Enter the base: "))
HEX = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"]
sol = []
s = 0
for i, l in enumerate(numstring):
    sol.append(f"{HEX.index(l)} * {base}^{i} + ")
    s += HEX.index(l) * base**i
print("".join(sol) + " = " + str(s))