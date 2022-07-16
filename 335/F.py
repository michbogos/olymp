f = input()

s = 0

for i in [int(u) for u in input().split(" ")]:
    s += i

if s % 2 == 0:
    print("AZINA TRI TAPARA!!!AZINA TRI TAPARA!!!")
else:
    print("USERS GOT LUCKY")
