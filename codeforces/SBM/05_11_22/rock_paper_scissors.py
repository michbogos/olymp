n = int(input())
ra, sa, pa = [int(i) for i in input().split()]
rb, sb, pb = [int(i) for i in input().split()]
print(min(pa, rb)+min(sa, pb)+min(ra, sb), max())