sols = [1, 1, 1, 2]

n = int(input())

def step(n):
    x = n
    m = 0
    option1=False
    option2=False
    option3=False
    if n % 2 == 0:
        option1 = n//2
    if n % 3 == 0:
        option2 = n//3
    option3 = n - 1
    if sols[option1] == min(sols[option1], sols[option2], sols[option3]):
        n //= 3
        m = sols[option1]+1
    elif sols[option2] == min(sols[option1], sols[option2], sols[option3]):
        n //= 2
        m = sols[option2] + 1
    elif sols[option3] == min(sols[option1], sols[option2], sols[option3]):
        n -= 1
        m = sols[option3] + 1
    return m
        
for i in range(4, n+1):
    sols.append(step(n))

print(sols[-1])
