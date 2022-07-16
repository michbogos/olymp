import itertools
n, max_weight = [int(i) for i in input().split()]

s = input().split()
objects = []

for i in s:
    if int(i) < max_weight:
        objects.append(int(i))

best_plus = 0
best = 0

for i in objects:
    if  max_weight - i < max_weight - best:
        best = i

bset_plus = [best]

for i in range(best, max_weight+1):
    i = 0
    while i < len(objects):
        if max_weight - objects[i] < max_weight - sum(best_plus):
            tmp = best
            best = objects[i]
            del objects[i]
            objects.append(tmp)
            objects.extend(best_plus)
            best_plus = [best]

        if max_weight - (sum(best_plus)+objects[i]) < max_weight - best:
            best_plus.append(objects[i])
            del objects[i]

        
print(best, sum(best_plus))