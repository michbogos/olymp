from sys import stdin

def catalan(n):
    if (n == 0 or n == 1):
        return 1
    catalan = [0 for i in range(n + 1)]
 
    catalan[0] = 1
    catalan[1] = 1

    for i in range(2, n + 1):
        catalan[i] = 0
        for j in range(i):
            catalan[i] += catalan[j] * catalan[i-j-1]
    return catalan[n]

for line in stdin:
    line.replace("a","")
    res = 1
    plus = 0
    mul = 0
    for c in line:
        if c == "+":
            plus += 1
            res *= catalan(mul)
            mul = 0
        if c == "*":
            mul += 1
    res *= catalan(plus)
    res *= catalan(mul)
    print(res)