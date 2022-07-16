from math import log2

n = int(input())

lookup = [[0 for i in range(n)]
		for j in range(n)]


class Query:
	def __init__(self, l, r):
		self.L = l
		self.R = r

def preprocess(arr: list, n: int):
	global lookup

	for i in range(n):
		lookup[i][0] = i

	j = 1
	while (1 << j) <= n:

		i = 0
		while i + (1 << j) - 1 < n:

			if (arr[lookup[i][j - 1]] <
					arr[lookup[i + (1 << (j - 1))][j - 1]]):
				lookup[i][j] = lookup[i][j - 1]
			else:
				lookup[i][j] = lookup[i +
									(1 << (j - 1))][j - 1]

			i += 1
		j += 1


def query(arr: list, L: int, R: int) -> int:
	global lookup
	j = int(log2(R - L + 1))
	if (arr[lookup[L][j]] <=
			arr[lookup[R - (1 << j) + 1][j]]):
		print(arr[lookup[L][j]])
	else:
		print(arr[lookup[R - (1 << j) + 1][j]])


def RMQ(arr: list, n: int, q: list, m: int):
	preprocess(arr, n)
	for i in range(m):
		L = q[i].L
		R = q[i].R
		query(arr, L, R)

a = [int(i) for i in input().split()]

num_q = int(input())

queries = []

for i in range(num_q):
    tmp = [int(i) for i in input().split()]
    queries.append(Query(tmp[0], tmp[1]))


RMQ(a, n, queries, num_q)
