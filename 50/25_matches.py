d = {"0":6, "1":2, "2":5, "3":5, "4":4, "5":5, "6":6, "7":3, "8":7, "9":6}
required = [0]
n = 0

while required[-1] < 2000:
    required.append(sum([d[i] for i in str(n)]))
    n += 1
    print(required[-1])

print(required)
