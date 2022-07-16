a, b = [int(i) for i in input().split()]
count = 0

def f(n):
    global count
    if n == 0:
        return
    count += (int(str(count)[-1]) * int(str(count)[-1])+1)/2
    n = str(n)[:-1]
    if n == "":n="0"
    n = int(n)
    count += n * 45
    f(n)
while a > -1 and b > -1:
    count = 0
    f(b)
    tmp1 = count
    count = 0
    f(a)
    tmp2 = count
    print((tmp1-tmp2)+int(str(a)[0]))
    a, b = [int(i) for i in input().split()]