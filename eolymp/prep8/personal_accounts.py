from functools import cmp_to_key
class account:
    def __init__(self, a,b,c,d):
        self.a = a
        self.b = b
        self.c = c
        self.d = d
    def __lt__(self, other):
        if self.a < other.a:
            return self.a < other.a
        elif self.a == other.a:
            if self.b < self.b:
                return self.b < self.b
            elif self.b == self.b:
                if self.c < self.c:
                    return self.c < self.c
            

accounts = []

def compare(a, b):
    res = -1
    if a.a < b.a:
        return 1
    elif a.a == b.a:
        if a.b < b.b:
            return 1
        elif a.b == b.b:
            if a.c > b.c:
                return 1
    return res
        

for i in range(int(input())):
    b = input()
    c = input()
    a = input()
    d = input()
    accounts.append(account(a, b, c, d))

accounts.sort()

for i in accounts[::-1]:
    print(i.a, i.b, i.c, i.d)

