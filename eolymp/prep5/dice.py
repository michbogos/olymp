n = int(input())

sols = [0, 1, 2, 4, 8, 16, 32]

if n <= 6:
    print(sols[n])
    exit()
else:
    for i in range(6, n):
        for i in range(len(sols)-1):
            sols[i] = sols[i+1]
        sols[-1] = (int(2)*int(sols[-2]) - int(sols[0]))

print(sols[-1]%1000000007)