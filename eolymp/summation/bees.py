from itertools import chain
tasks = []
with open("./input.txt") as f:
    for i in f:
        i = i.replace("\n", " ")
        tasks.append([x for x in i.split(" ")])

tasks = chain.from_iterable(tasks)

tasks_set = ['Re', 'Pt', 'Cc', 'Ea', 'Tb', 'Cm', 'Ex']

d = {}

for i in tasks_set:
    d[i] = 0

for i in tasks:
    try:
        d[i] += 1
    except:
        pass


vals = [d[task] for task in d]
s = sum(vals)

for task in d:
    print(task, d[task], format(d[task]/s, ".2f"))

print("Total", s, "1.00")