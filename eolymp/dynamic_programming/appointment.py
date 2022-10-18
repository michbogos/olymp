n = int(input())

appointments = []
for i in range(n):
    s, e = [i for i in input().split()]
    s = s[:2] + s[3:]
    e = e[:2] + e[3:]

    appointments.append([int(s), int(e)])

count = 0

time_range = []

appointments.sort(key=lambda x: x[1]-x[0])

time_range = appointments[0]

count += 1

del appointments[0]

for i in range(len(appointments)):
    if not (appointments[i][0] >= time_range[0] and appointments[i][0] < time_range[1]):
        time_range[0] = min(time_range[0], appointments[i][0])
        time_range[1] = max(time_range[1], appointments[i][1])
        count += 1

print(count)
