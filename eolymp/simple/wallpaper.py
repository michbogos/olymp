n, m, k = [int(i) for i in input().split()]

t = k//n
r = m//t
q = r*(k%n)
if m%t != 0:
    r += 1
    q += k-m%t*n


print(r, q)