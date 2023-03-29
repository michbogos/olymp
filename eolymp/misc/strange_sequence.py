n = int(input())
print("\n".join([(str(i)+str(i+1)[0]) for i in range(1, n+1)]))