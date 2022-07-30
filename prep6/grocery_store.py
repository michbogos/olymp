num = int(float(input())*100)

for i in range(500):
    for j in range(500):
        for k in range(500):
            for l in range(500):
                if i * j * k * l != i + j + k + l:
                    continue
                elif i * j * k * l > num:
                    break