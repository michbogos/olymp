n = int(input())

string = ""

if len(str(n // 3600)) == 1:
    string += "0" + str(n//3600) + ":"
else:
    string += str(n//3600) + ":"

if len(str((n // 3600)//60)) == 1:
    string += "0" + str((n//3600)//60) + ":"
else:
    string += str((n//3600)//60) + ":"

if len(str(n % 3600)) == 1:
    string += "0" + str(n%3600) + ":"
else:
    string += str(n%3600)

print(string)
