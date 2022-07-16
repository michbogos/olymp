
for u in range(int(input())):
    j, k = [int(i) for i in input().split(" ")]
    s = ((k-j+1)/2)*(j + k)
    print(int(s))
