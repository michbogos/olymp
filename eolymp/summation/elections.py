import array

a = array.array("b")

n, k = [int(i) for i in input().split()]

for i in input().split():
    a.append(int(i))

votes = []

for i in range(1, k+1):
    votes.append(a.count(i))
if max(votes) > sum(votes)/2:
    print("YES")
else:
    print("NO")
