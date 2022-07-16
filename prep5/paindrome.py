string = input()
string = "".join(string.split(" "))

if string == string[::-1]:
    print("YES")
else:
    print("NO")