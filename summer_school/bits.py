n, q = [int(i) for i in input().split()]
bs = [int(i) for i in input().split()]
bits = {}
for bit in bs:
    try:
        bits[bit] += 1
    except:
        bits[bit] = 1

queries = []
for i in range(q):
    s = 0
    num = int(input())
    copied = bits
    for bit in reversed(copied):
        if num == 0:
            break
        if copied[bit] != 0:
            s += min(num//bit, copied[bit])
            num-= bit*min(num//bit, copied[bit])
    if num != 0:
        print(-1)
    else:
        print(s)

