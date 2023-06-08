n = int(input())

l = 0
r = n
while r-l > 1:
    mid = (r+l)/2
    if mid*(mid-1)/2 > n:
        r = mid
    else:
        l = mid

print(min(l,r,mid))