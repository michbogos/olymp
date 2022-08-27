from functools import reduce
input()
c= chr(reduce(lambda x,y: x ^ y, [ord(i) for i in input()]))
if c != "":
    print(c)
else:
    print("Ok")

