input()
nums = [int(i) for i in input().split()]

ordered = sorted(nums)

m = 1e100

for i in range(len(ordered)-1):
    if ordered[i+1] - ordered[i] < m:
        m = ordered[i+1] - ordered[i]
        a, b = [ordered[i], ordered[i+1]]
idx1 = nums.index(a)+1
idx2 = nums.index(b)+1

print(m)
print(min(idx1, idx2), max(idx1, idx2))

