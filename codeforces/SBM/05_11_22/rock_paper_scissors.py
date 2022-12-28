n = int(input())
a1, a2, a3 = [int(i) for i in input().split()]
b1, b2, b3 = [int(i) for i in input().split()]

print(max(a1-b1-b3, a2-b2-b1, a3-b3-b2, 0), min(a1, b2)+min(a2, b3)+min(a3, b1))