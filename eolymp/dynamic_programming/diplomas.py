w, h, n = [int(i) for i in input().split()]

l = 0
r = (w + h) * n + 1

while r-l > 1:
    x = (r + l)//2
    if (x // w) * (x // h) >= n:
        r = x
    else:
        l = x

print(r)
