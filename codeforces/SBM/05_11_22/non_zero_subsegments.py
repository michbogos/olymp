input()
a = [int(x) for x in input().split()]
d = set()
d.add(0)
cur = 0
ans = 0
for i in a:
	cur += i
	if cur in d:
		ans += 1
		d = set()
		d.add(0)
		cur = i
	d.add(cur)
print(ans)