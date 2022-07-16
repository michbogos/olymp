nums = [int(i) for i in input().split()]

n = nums[0]
del nums[0]

d = {}

for i in range(len(nums)):
    if i%2 == 0:
        item = [str(nums[i])]
    else:
        item.append(str(nums[i]))
    if len(item) == 2:
        try:
            d[" ".join(item)] += 1

        except:
            d[" ".join(item)] = 1

vals = [d[i] for i in d]

print(max(vals))
