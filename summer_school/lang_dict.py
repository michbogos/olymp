a, b = input().split()
d = {}
while [a, b] != ["dictionary", "finished"]:
    try:
        if d[a] == b:
            print("your translation is correct")
        else:
            print("your translation is incorrect")
    except:
        d[a] = b
        print("your translation has been added successfully")
    a, b = input().split()

print(len(d))
for key in sorted(d):
    print(key, d[key])

