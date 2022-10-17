import datetime

def palindrome(s):
    if s == s[::-1]: return True

with open("clock_palindrome.txt", "w") as f:
    s = []
    for i in range(24):
        for u in range(60):
            string = str(datetime.time(i, u))[:-3]
            if palindrome(string):
                s.append("{" + f"{string.split(':')[0]}, {string.split(':')[1]}" + "}")
    f.write("{" + f"{', '.join(s)}" + "}")