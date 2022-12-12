import re

with open("11.txt", "r") as f:
    for line in f:
        print(re.search("", line).group())