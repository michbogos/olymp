num = int(input())

hours = 9
minutes = 0

for i in range(1, num+1):
    if i < num:
        minutes += 45
        if i % 2 == 0:
            minutes += 15
        else:
            minutes += 5
    else:
        minutes += 45

hours += minutes//60

minutes = minutes % 60

print(" ".join([str(hours), str(minutes)]))
