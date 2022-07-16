nums = [int(i) for i in input().split()]

del nums[0]

s = 0
m = 0
j, k = [0, 0]


for i in range(0, len(nums)-1, 2):
    if nums[i] + nums[i+1] > m:
        m = nums[i] + nums[i+1]
        j = i
        k = i+1

s += m
m = 0
nums1 = nums[:i]
nums2 = nums[k+1:]

if len(nums1) == 1:
    m2 = nums1[0]
else:
    for i in range(0, len(nums1)-1, 2):
        if nums1[i] + nums1[i+1] > m:
            m = nums1[i] + nums1[i+1]
            j = i
            k = i+1

    m1 = m

m = 0

if len(nums2) == 1:
    m2 = nums2[0]
else:
    for i in range(0, len(nums2)-1, 2):
        if nums2[i] + nums2[i+1] > m:
            m = nums2[i] + nums2[i+1]
            j = i
            k = i+1

    m2 = m

s += max(m1, m2)

print(s)