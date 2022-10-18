nums = []
with open("input.txt", "r") as f:
    for i in f:
        nums.append(int(i.replace("\n", "")))

for n in nums:
    sum = 0
    while n > 0:
        sum += ((1+n)//2)**2
        n //= 2
    print(sum)