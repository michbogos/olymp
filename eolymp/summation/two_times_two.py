nums = [int(i) for i in input().split()]
s = "0"

while s != "-1":
    count = 0
    for i in nums:
        if i*2 in nums and i != 0:
            count += 1
    print(count)

    s = input()
    if len(s) > 2:
        nums = [int(i) for i in s.split()]