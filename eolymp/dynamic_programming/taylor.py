from operator import itemgetter, attrgetter
from functools import cmp_to_key


index = 1

tasks = []

class task:
    def __init__(self, time, cost, index):
        self.value = cost/time
        self.index = index



for i in range(int(input())):
    t, c = [int(i) for i in input().split()]
    tasks.append(task(t, c, index))
    index += 1

tasks = sorted(tasks, key=attrgetter("value"), reverse=True)

stop = False

while not stop:
    count = 0
    for i in range(len(tasks)-1):
        if tasks[i].value == tasks[i+1].value:
            if tasks[i].index > tasks[i+1].index:
                t = tasks[i]
                tasks[i] = tasks[i+1]
                tasks[i+1] = t
                count += 1
    if count == 0:
        stop = True

s = []

for i in tasks:
    s.append(str(i.index))

print(" ".join(s))


