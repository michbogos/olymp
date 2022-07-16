m, speed, cost = [int(i) for i in input().split(" ")]

if speed <= m:
    print(0)

else:
    print((speed-m)*cost)
