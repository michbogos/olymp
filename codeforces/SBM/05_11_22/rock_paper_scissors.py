from itertools import permutations
n = int(input())
ra, sa, pa = [int(i) for i in input().split()]
rb, sb, pb = [int(i) for i in input().split()]
res1 = min(pa, rb)+min(sa, pb)+min(ra, sb)
res2 = 0

possible = [["rb", "ra"], ["sa", "sb"], ["pa", "pb"], ["rb", "sa"], ["sb", "pa"], ["pb", "ra"]]

vals = {"rb":rb, "ra":ra, "pa":pa, "pb":pb, "sa":sa, "sb":sb}
reserve = vals

mx = 0

for permutation in permutations(possible):
    print(len(permutation))
    current = 0
    vals = reserve
    for k1, k2 in permutation:
        r = min(vals[k1], vals[k2])
        current += r
        vals[k1] -= r
        vals[k2] -= r
    mx = max(mx, current)

print(mx)