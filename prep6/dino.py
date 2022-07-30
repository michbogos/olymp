eggs = []
nums = []
for i in range(2*int(input())):
    eggs.append([int(i) for i in input().split()])
    eggs[i].append(eggs[i][0] - eggs[i][1])

eggs = sorted(eggs, key=lambda x: x[2])

print(sum([eggs[i][1] for i in range(len(eggs)//2)]) + sum([eggs[i][0] for i in range(len(eggs)//2, len(eggs))]))
