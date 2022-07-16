f = input()

count = 0

for i in [int(u) for u in input().split(" ")]:
    if format(i, "b")[0] == "1" and format(i, "b").count("1") == 1:
        count += 1

print(count)
        
