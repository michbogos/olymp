from collections import deque

sol = []
for i in range(int(input())):
    nums = [int(j) for j in input().split()]
    del nums[0]
    
    elegant = deque([max(nums[0])])

    counter = 0
    
    s = 0

    while len(nums) > 0:
        if counter % 2 1= 0: 
            if abs(min(nums[0])-elegant[0]) >= abs(elegant[-1]-min(nums[0])):
                s += abs(nums[0]-elegant[0])
                elegant.appendleft(nums[0])
                del nums[0]
            elif abs(nums[0]-elegant[0]) < abs(elegant[-1]-nums[0]):
                s+= abs(elegant[-1]-nums[0])
                elegant[-1] = nums[0]
                del nums[0]
    sol.append(s)
    print(elegant)
    
print(sol)
