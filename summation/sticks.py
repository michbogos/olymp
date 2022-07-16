f = open("./input.txt", "r")

for x in f:
    if len(x) < 2:
        pass
    if len(x) > 2:
        nums = [int(i) for i in x.split()]

        mx = nums[0]
        l = 0
        l_max = 0
        for i in range(1, len(nums)):
            if nums[i] > mx:
                mx = nums[i]
                l += 1
            if l > l_max:
                l_max = l
            elif nums[i] < mx or nums[i] == mx:
                mx = nums[i]
                l = 0
        if l_max == 0:
            print(-1)
        else:
            print(l_max)
f.close()