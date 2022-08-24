lower_bound = [-10e30]
upper_bound = [10e30]

nums = [int(i) for i in input().split()]

previous = upper_bound

for i in nums:
    if i < lower_bound or i > upper_bound:
        print("NO")
        exit()
    elif i > previous:
        lower_bound = i
    elif i < previous:
        upper_boundi
    previous = i

print("YES")
