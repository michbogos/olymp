import math

a, b = [int(i) for i in input().split()]
if math.floor(math.log2((a + b) / math.gcd(a, b))) == math.log2((a + b) / math.gcd(a, b)) and math.log2((a + b) / math.gcd(a, b)) > 0:
    print(str(int(math.log2((a + b) / math.gcd(a, b)))))
else:
    print(-1)
